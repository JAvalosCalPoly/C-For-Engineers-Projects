#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cout << "enter a value for \'s\': ";
double s;
	cin >> s;

double numer = 1000(s+5000};
double denom = (s*s) + (6000*s) + (25e6); //25e6 = 25*10^6
double H_S = (20*log10)(numer/demnom);

	cout << "H(" << s << ") = " << H_S << "." << endl;

return 0;
}