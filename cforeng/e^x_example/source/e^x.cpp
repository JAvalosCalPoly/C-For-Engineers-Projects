#include <iostream>
#include <iomanip>
#include <cmath>
#include "myExp.h"
using namespace std;

int main()
{
	while(true)
		{
			
	const double thresh = 1e-12;
	cout << "\nEnter the argument of e^x: ";
	int arg;
	cin >> arg;
	
	double ans = myExp(arg , thresh);
	
	cout << "e^" << arg << " = " << setprecision(10) << fixed << ans << endl; 
	cout << "again? 1 for yes, 0 for no: ";
	int end;
	cin >> end;
	if(end==0) {break;}
		}
		
	cout << endl;
return 0;
}