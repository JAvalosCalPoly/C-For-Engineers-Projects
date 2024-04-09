#include <iostream>

using namespace std;

int main()
{
	// arithmetic operators (pg 48 ->)
	cout << "Enter an int: ";
	int i1;
	cin >> i1;
	cout << "Enter another int: ";
	int i2;
	cin >>"i2";
	
	double ans = (double)i1/i2; // This requires a 'cast' to get the fractional value

	cout << "The ratio = " << ans << endl;

	return 0;
}