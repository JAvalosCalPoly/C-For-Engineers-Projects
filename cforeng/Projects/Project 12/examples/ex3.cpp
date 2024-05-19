#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Enter array size: ";
    int arraySize;
    cin >> arraySize;
    cout << endl;

    // int iArray[arraySize];

    // cannot do this, must be a number
    // we must use Dynamicc memory Allocation
    // pg 461 -->

    int * iArray = new int[arraySize];

    // now iArray is arraySize big, this is true because the name of the array is a pointer,
    // the new functions calls for memory that is "arraySize" big

    delete [] iArray; // delete the memory you got,
    // forgetting to return the memory results in "memory leak"
    // this crashes the system and is a common bug and often
    // hard to find
 return 0;   
}