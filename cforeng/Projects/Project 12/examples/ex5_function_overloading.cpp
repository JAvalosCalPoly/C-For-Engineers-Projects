#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

    // function overloading (pg 190 ->)

    // in header file
    int add(int , int);
    int add();
    int add(double, double);
    // we can use the same function name as long as
    // the functions differ in "signiture"
    // signiture is anything to do with the argument list, return type
    // is not included
    // for instance:
    // double add(int, int); ==> error, same "signiture" as above