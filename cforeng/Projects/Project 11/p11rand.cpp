#include <iostream>
#include <cstdlib>
#include "p11rand.h"
using namespace std;

int Randmy(int min, int max) {
    return min + rand () % (max - min + 1);
}

void generateMultiplication(){
    int i1 = Randmy(1 , 9);
    int i2 = Randmy(1 , 9);
    int answer = i1 * i2;

    cout << "\nHow much is " << i1 << " times " << i2 << "?\n "<< "attempt: ";
    int userAnswer;
    cin >> userAnswer;

    while (userAnswer != answer){
        cout << "\nWrong, Please try again." << endl;
        cout << "How much is " << i1 << " times " << i2 << "?\n "<< "attempt: ";
        cin >> userAnswer;
    }
    cout << "\nGood job, correct!\n";
}

void generateDivision(){
    int divident = Randmy(1000 , 9999);
    int divisor = Randmy(1 , 99);
    int quotient = divident / divisor;
    int remainder = divident % divisor;

    cout << "\nWhat is " << divident << " divided by " << divisor << " ?\n" << "attempt: ";
    int userAnswer;
    cin >> userAnswer;

    cout << "\nWhat is the Remainder of " << divident << " divided by " << divisor << " ?\n" << "attempt: ";
    int userRemain;
    cin >> userRemain;
    
    while(userAnswer != quotient || userRemain != remainder){
        cout << "Wrong, try again\n" << "What is " << divident << " divided by " << divisor << " ?\n" << "attempt: ";
        cin >> userAnswer;
        cout << "\nWhat is the Remainder of " << divident << " divided by " << divisor << " ?\n" << "attempt: ";
        cin >> userRemain;
    }
    cout << "\nRight! nice!\n";
}