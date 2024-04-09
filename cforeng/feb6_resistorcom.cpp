#include <iostream>
using namespace std;

int main()
{

//combining 2 resistors into 1
cout << "Enter a resistor value: ";
int R1;
cin >> R1;
cout << "Enter another resistor value: ";
int R2;
cin >> R2;

double Requiv = double(R1*R2)/(R1+R2);

cout << "Req = " << Requiv << " ohms." << endl;

return 0;
}