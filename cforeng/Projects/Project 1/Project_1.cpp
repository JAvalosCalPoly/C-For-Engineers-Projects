#include <iostream>

using namespace std;

int main()
{

	cout << "Enter an integer, please.";
	int a;
cin >> a;
	cout << "Enter another integer, please, I need two!";
	int b;
cin >> b;

int sum = a+b;
int dif1 = a-b;
int dif2 = b-a;
int prd = a*b;
double rat1 = (double)a/b;
double rat2 = (double)b/a;
int mod1 = a%b;
int mod2 = b%a;	


		if (a==b)
{
	cout << a << " is equal to " << b << endl;
}

		if (a>b)
{
	cout << a << " is greater than " << b << endl;
}
		if (b>a)
{
	cout << b << " is greater than " << a << endl;
}

cout << a << " + " << b << " = " << sum << endl;
cout << a << " - " << b << " = " << dif1 << endl;
cout << b << " - " << a << " = " << dif2 << endl;
cout << a << " * " << b << " = " << prd << endl;
cout << "The ratio of " << a << " and " << b << " is " << rat1 << endl;
cout << "The ratio of " << b << " and " << a << " is " << rat2 << endl;
cout << a << " mod. " << b << " = " << mod1 << endl;
cout << b << " mod. " << a << " = " << mod2 << endl;

return 0;

}