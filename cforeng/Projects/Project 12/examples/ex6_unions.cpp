#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//in header file
typedef union
    {
       struct
       {
        unsigned char byte1; /* data */
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
       } bytes;
       unsigned int word;  
    } HWRegister;

int main()
{
    HWRegister myReg;
    myReg.word = 0x12345678;
    cout << "myReg.word = 0x" << hex << myReg.word << endl;

    myReg.bytes.byte1 = 0xAB;
    cout << "myReg.word = 0x" << hex << myReg.word << endl;

    myReg.bytes.byte3 = 0xCD;
    cout << "myReg.word = 0x" << hex << myReg.word << endl;

 return 0;
}