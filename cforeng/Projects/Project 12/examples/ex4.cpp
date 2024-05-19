#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


    // passing arrays to functions (fig 6.13 p. 251,252)

    // in the header file... make a function that takes an array argument.
    // line 7
    void modifyArray(int array[] , int arraysize);
int main(){
    //calling array function in main
    int a[arraySize] = {0 , 1, 2, 3, 4 };
    modifyArray(a,arraySize);
    return 0;
}
    // In the cpp file for the function
    // line 40 -->
    modifyArray(int b[],int arraySize){
        ....
    }
// note: arrays passed to functions are passed through reference
// not by value so that you are working on the REAL array
// and not the function.