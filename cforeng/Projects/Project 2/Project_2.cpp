#include <iostream>
#include <cmath>

using namespace std;

int main()
{

// quadratic in form ax^2 + bx + c = 0

		cout << "for a quadratic equation in the form ax^2 + bx + c = 0 , please type the \"a\" term: ";
double a;
		cin >> a;

		cout << "your \"a\" term is " << a << ". Now type a \"b\" term: ";
double b;
		cin >> b;

		cout << "your \"b\" term is " << b << ". Now type a \"c\" term: ";
double c;
		cin >> c;

		cout << "your \"c\" term is " << c << "." << endl;

double r1num1 = -b;
double r2num1 = -b;
double rnum2 = sqrt( b*b - 4*a*c );
double den = 2*a;
double r1 = (r1num1+rnum2)/den;
double r2 = (r2num1-rnum2)/den;

		cout << "root 1 = " << r1 << endl;
		cout << "root 2 = " << r2 << endl;

return 0;
}