#include <iostream>
using namespace std;

enum{FLD=0x1FC0 , LED=0x10 , PWR=0x1 , SHFT=6};

int main()
{
    unsigned int ctrlreg;
    cout << ctrlreg << endl;
    ctrlreg |= PWR;
    cout << ctrlreg << endl;
    ctrlreg &= ~PWR;
    cout << ctrlreg << endl;

    ctrlreg &= ~FLD;
    cout << ctrlreg << endl;
    ctrlreg |= (100<<SHFT);
    cout << ctrlreg << endl;

    int value = ((ctrlreg & FLD)>>SHFT);
    cout << value << endl;

    if (ctrlreg & LED){
        cout << "led on\n"; 
    } else {
        cout << "led off\n";
    }
return 0;
}