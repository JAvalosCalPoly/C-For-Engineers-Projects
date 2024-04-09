#include <iostream>
#include <iomanip>
#include <cmath>
#include "P8.h"
using namespace std;

int main()
{
	while(true)
		{
			
	const double thresh = 1e-3;
	cout << "\n" << "Enter the argument of cos and sine: ";
	double arg;
	cin >> arg;
	
	double ans = myCos(arg , thresh);
	
	cout << "cos(" << arg << ") = " << setprecision(7) << fixed << ans << endl; 
	
	cout << "again? 1 for yes, 0 for no: ";
	int end;
	cin >> end;
	if(end==0) {break;}
		
		}
	cout << endl;
return 0;
}