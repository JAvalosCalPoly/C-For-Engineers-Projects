#include <iostream>
using namespace std;

// Literal; an actual piece of data, of a particular type (int: 1, Double: 4.567, bool: true)
// identifier: some name in your program
// rules for Legal variable name: "starts with a letter, no spaces"

int main()
{

	if (x == 0) {		// having if(x==0);{} will prematurely end the if statement (statements will run no matter what.).
		//statement;
		//statement;
		//statement;
		// ...
}

//for user input int

cout << "Enter int: ";
int i1;
cin >> i1;

//for double, same as an int but instead of declaring and input int it is double

cout << "Enter double: ";
double d1;
cin >> d1;


cout << "Enter a circle radius: ";
double theRadius;
cin >> theRadius;

//double AreaofCircle = 3.1415927*theRadius*theRadius //don't code like this
const double pi = 3.1415926535897932384626433832795 // const makes it so you cannot change the variable after, like declaring later pi = 20
double AreaofCircle = pi*theRadius*theRadius


// combining 2 resistors into 1
cout << "Enter a resistor value: ";
int R1;
cin >> R1;
cout << "Enter another resistor value: ";
int R2;
cin >> R2;

double Requiv = double(R1*R2)/(R1+R2);

cout << "Req = " << Requiv << " ohms."

return 0;
}
