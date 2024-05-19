#include <iostream>
#include <ctime>
#include <cstdlib>
#include "p12.h"
using namespace std;

int main()
{
    char playAgain;
    while(true)
    {
        srand(time(0));

        while (playAgain != 'n')
        {
            cout << "This is a Blackjack game.\n" << "\ngame start\n";
            _sleep(1000);
            int PlayerC[22]; // this looks weird, basically if they had
            int DealerC[22]; // all 1 that adds up to 21, one more is 22
                             // so the array is set to a max of 22 cards

            //dealer draws first
            cout << "dealer draws his card...\n";
            cout << "waiting....\n";
            _sleep(750);             // wait 1 seconds
            int dealerCardCount = 2; // 2 cards to start
            DealerC[0] = drawcard(); // he draws 2 cards
            DealerC[1] = drawcard();
            _sleep (500);

            //player's turn
            cout << "\nYour turn ... \n";
            _sleep(750);
            int playerCardCount = 2; // 2 cards to start
            PlayerC[0] = drawcard(); // draws 2 cards
            PlayerC[1] = drawcard();
            cout << "dealer cards:   |" << DealerC[0] << "| , |--|\n"; // shows dealer cards to the player
            cout << "Player's cards: |" << PlayerC[0] << "| , |" << PlayerC[1] << "|\n";
            int playerTotal = TOT(PlayerC, 2); // total so that player can see total
                                                // it is easier to play without doing it
                                                // in your head
            cout << "        Total: " << playerTotal << endl;

            char choice;
            while (playerTotal <= 21) { // for as long as player isn't bust
                cout << "Do you want to hit? (y/n): ";
                cin >> choice;
                cout << endl;
                if (choice != 'y') 
                {
                        break; // they don't want to bust for whatever reason
                }
                PlayerC[playerCardCount++] = drawcard(); // draws
                cout << "dealer cards:   |" << DealerC[0] << "| , |--|\n";
                cout << "Player's cards: ";
                    for (int i = 0; i < playerCardCount; i++)
                    {
                    cout << "|" << PlayerC[i] << "| , "; // will print cards while player hits
                    }
                    playerTotal = TOT(PlayerC, playerCardCount); // total re-calculated
                    cout << "\nTotal: " << playerTotal << endl;
                    
            }

                if (playerTotal > 21) 
                    {
                    cout << "\nPlayer busts! Dealer wins.\n";
                    cout << "\nDo you want to play again? (y/n): ";
                    cin >> playAgain;
                    if (playAgain != 'y' && playAgain != 'Y' && playAgain != 'n' && playAgain != 'N') 
                    {
                    cout << "Wrong input, ";
                    } else if (playAgain == 'n' || playAgain == 'N') 
                        {
                            break; // Exiting the loop if the user chooses not to play again
                        }
                    cout << endl;
                    continue;// Continue the loop for other cases
                    }   
            
            while (TOT(DealerC, dealerCardCount) < 17 && playerTotal <= 21)  // dealer draws until at or over 17
                {
                    DealerC[dealerCardCount++] = drawcard();
                
                cout << "\nDealer's cards: "; // shows his cards to the player
                    for (int i = 0; i < dealerCardCount; ++i)
                    {
                        cout << " |" << DealerC[i] << "| , ";
                    }
                    _sleep(500);
                }
            

            int dealerTotal = TOT(DealerC, dealerCardCount);
            cout << "\nDealer's total: " << dealerTotal << endl;
            // Determine the winner
            if (dealerTotal > 21 || playerTotal > dealerTotal) {
                cout << "\nPlayer wins!\n";
            } else if (playerTotal < dealerTotal) {
                cout << "\nDealer wins.\n";
            } else {
                cout << "\nIt's a tie!\n";
            }
                cout << "\nDo you want to play again? (y/n): ";
                cin >> playAgain;
                if (playAgain != 'y' && playAgain != 'Y' && playAgain != 'n' && playAgain != 'N') 
                    {
                    cout << "Wrong input, ";
                    } else if (playAgain == 'n' || playAgain == 'N') 
                        {
                            break; // Exiting the loop if the player chooses not to play again
                        }
                    cout << endl;
     
        }
    cout << "\nthank you for playing!";
    _sleep(2000);
    }
    return 0;
}
