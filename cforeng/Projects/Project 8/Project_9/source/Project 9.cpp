#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

enum { ENTER$, WAITFORSEL, INVCHECK, RETURN };

int main() {
    int sodacost = 75;
    int cnt_sprite = 2;
    int cnt_coke = 2;
    int state = ENTER$;
    static int inp = 0;
    int choice;

    while (true) {
        switch (state) {
            case ENTER$:
                cout << "Please enter money to purchase (press 0 to return)\n"; // Ask for money
                int ent;
                cin >> ent;
                inp += ent; // Total = money entered + itself (starts at 0)
                
                if (ent == 0) {
                    state = RETURN; // Return button
                }
                else if (inp >= sodacost) { // Bought a drink
                    int change = inp - sodacost; // Difference
                    inp -= change; // Total = total money - change = 75
                    cout << "Your change is " << change << " cents.\n";
                    state = WAITFORSEL;
                }
                break;

            case WAITFORSEL:
                cout << "Which drink would you like (1 for coke or 2 for sprite) or press 0 to return\n";
                cin >> choice; // Which dfrink they chose
                
                if (choice == 1 || choice == 2) {
                    state = INVCHECK; // Goes to invcheck when they select a drink
                }
                else if (choice == 0) {
                    state = RETURN; // Return button
                    break;
                }
                break;

            case INVCHECK:
                if (choice == 1 && cnt_coke > 0) {
                    cout << "Coke dispensing, thank you\n";
                    cnt_coke -= 1; // Coke is subtracted from total
                    inp = 0; // Reset total money cos we accept their payment
                    state = ENTER$; // Reset state to ENTER$
                }
                else if (choice == 2 && cnt_sprite > 0) {
                    cout << "Sprite dispensing, thank you\n";
                    cnt_sprite -= 1; // Sprite is subtracted from total
                    inp = 0; // Reset total
                    state = ENTER$; // Reset state to ENTER$
                }
                else if (choice == 1 && cnt_coke == 0 && cnt_sprite > 0) {
                    cout << "\nSorry, Coke is sold out, please choose a different drink :3\n";
                    state = WAITFORSEL; // Coke is out but Sprite isn't
                }
                else if (choice == 2 && cnt_sprite == 0 && cnt_coke > 0) {
                    cout << "\nSorry, Sprite is sold out, please choose a different drink :3\n";
                    state = WAITFORSEL; // Sprite is out but Coke isn't
                }
                else {
                    cout << "\nSorry, all sold out of everything :3\n";
                    state = RETURN; // Every drink is sold out
                }
                break;

            case RETURN:
                cout << "Returning inserting payment\n" << "Amount returning ... " << inp << endl << endl;
                inp = 0; // Return money, total money is now zero
                state = ENTER$; // Goes back to enter payment.
                break;
        }
    }

    return 0;
}