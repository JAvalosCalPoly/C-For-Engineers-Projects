#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int iArray[100];
    //name of the array is a pointer to the first value of the array
    cout << iArray << endl; // an addrese prints out

    iArray[0]=50;

    cout << iArray[0] << endl;// '50' prints out

    int i1 = iArray[0]; //i1 now contains '50'

    return 0;
}