#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

enum {ENTER$ , WAITFORSEL , INVCHECK , RETURN};

int main()
{
    int sodacost = 75;
    int cnt_sprite = 2;
    int cnt_coke = 2;
    int state = ENTER$;
    static int inp = 0;
    int choice;
    while (true)
    {
        switch (state)
        {

            case ENTER$:
                cout << "please enter money to purchase (press 0 to return)\n"; //ask for money
            int ent;
            cin >> ent;
            inp += ent;                                             //total = money entered + itself (starts at 0)
            if (ent == 0)
            {
                state = RETURN;                                     //return button
            }
            else if (inp >= sodacost) //bought a drink
            {
                int change = inp - sodacost; //difference
                inp -= change;                                      //total = total money - change = 75
                cout << "your change is " << change << " cents.\n";
                state = WAITFORSEL;
            }
            break;
            case WAITFORSEL:
                cout << "which drink would you like ( 1 for coke or 2 for sprite ) or press 0 to return\n";
                cin >> choice;
                if (choice == 1 || choice == 2)  
                {
                    state = INVCHECK;
                }
                else if (choice == 0)
                {
                    state = RETURN;
                    break;
                }
            case INVCHECK:
                if (choice == 1 && cnt_coke > 0)
            {
                cout << "coke dispensing, thank you\n";
                cnt_coke -= 1;
                inp = 0;
                state = ENTER$; // Reset state to ENTER$
            }
            else if (choice == 2 && cnt_sprite > 0)
            {
                cout << "sprite dispensing, thank you\n";
                cnt_sprite -= 1;
                inp = 0;
                state = ENTER$; // Reset state to ENTER$
            }
            else
            {
                cout << "sorry all sold out :3\n";
                state = RETURN;
            }
            
            break;
            case RETURN: 
                cout << "returning inserting payment\n" << "amount returning ... " << inp << endl << endl;
                inp = 0;
                state = ENTER$;
                break;
        }

    }
   
return 0;
}   