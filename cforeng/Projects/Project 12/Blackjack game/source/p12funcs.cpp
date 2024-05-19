#include <cstdlib>
#include "p12.h"

int drawcard()
{
    return (1 + rand()%10); // generates a card , 1 through 10.
}

int TOT(int cards[], int size)
{
    int total = 0; // total starts at 0
    int aceCount = 0; // no aces at the start
    for (int i = 0; i < size; ++i) { // loop to determine score which card array
        if (cards[i] == 1) {
            //aceCount++;
            total += 1; // Ace initially counts as 1
        } else if (cards[i] >= 10) {
            total += 10; // Face cards count as 10
        } else {
            total += cards[i]; // Numbered cards count as their value
        }
    }
    //————————————————————————————————————————————————————//
    // Bottom doesn't run it is just for my own amusement
       // Adjusting the value of aces for when player or dealer doesn't bust
    // while (aceCount > 0 && total + 10 <= 21) { // if they have an ace and haven't bust
    //    total += 10; // Counting one ace as 11
    //    aceCount--; // ace count goes down
    //}
    //———————————————————————————————————————————————————//
    return total;
}