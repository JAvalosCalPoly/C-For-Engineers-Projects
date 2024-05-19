#include <iostream>
using namespace std;

int main()
{

    int i1 = 5;
    int i2 = 10;

    double d1 = 1.345;
    double d2 = 2.690;

    int * iPtr = &i1;
    double * dPtr = &d1;

    cout << "Value of iPtr = " << iPtr << endl;
    cout << "Value of dPtr = " << dPtr << endl;

    cout << "Adresse of  iPtr = " << &i1 << endl;
    cout << "Adresse of dPtr = " << &d1 << endl;

    cout << "Value of first int = " << i1 << "(directly)" << endl;
    cout << "Value of first double = " << d1 << "(directly)" << endl;

    cout << "Value of first int = " << *iPtr << "(indirectly)" << endl;
    cout << "Value of first double = " << *dPtr << "(indirectly)" << endl;

    *iPtr = 500;
    *dPtr = 134.5;

    cout << "New value of i1 = " << i1 << " (done directly)" << endl;
    cout << "New value of d2 = " << d1 << " (done directly)" << endl;

    cout << "Value of second int = " << i2 << endl;
    cout << "Value of second double = " << d2 << endl;

    iPtr = &i2;
    dPtr = &d2;

    cout << "Newer  value of iPtr = " << iPtr << endl;
    cout << "Newer value of dPtr = " << dPtr << endl;
    cout << "Newer value of *iPtr = " << *iPtr << endl;
    cout << "Newer value of *dPtr = " << *dPtr << endl;



    return 0;

}