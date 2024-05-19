#include <iostream>
#include <iomanip>
#include <cmath>
#include "Vel_Dist.h"
using namespace std;

	extern double * xPtr = &x;
	extern double  * vPtr = &v;
	extern double x = 0;
	extern double v = 0;

int main(){
	while (true)
	{


	double L;
	cout << "\nenter a time \"t\"\n";
	cin >> L;
	cout << "\nwhat step size?\n";
	double sp;
	cin >> sp;
	


	int nstep = ceil(L/sp);
	for (int i=0 ; i <= nstep ; i++)
	{
		cout << "t: " << fixed << setprecision(4) << t << "     x: " << *xPtr << "     v: " << *vPtr << endl;
		t += sp;
		VelCalc(9.806,t);
		DistCalc(9.806,t);
	}
	}
	return(0);
}