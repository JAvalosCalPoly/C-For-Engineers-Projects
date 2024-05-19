#include <iostream>
#include <cstdlib>
#include <ctime>
#include "p11rand.h"
using namespace std;

int main()
{

    srand(time(0)); //random number generator seed

    char choice;

        cout << "Select which: M for multiplication, D for division\n" << "choice: "; 
        cin >> choice;
        while(true){
        switch (choice)
        {
            case 'M' :
            case 'm' :
            generateMultiplication();
            break;
            case 'D' :
            case 'd' :
            generateDivision(); 
            break;
            default : cout << "\nInvalid choice, try again.\n";

        }
        }
    return 0;
}