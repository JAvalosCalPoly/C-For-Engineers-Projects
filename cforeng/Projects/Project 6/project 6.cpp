#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	while (true)
	{
	
	double L;
	cout << "\nenter a time \"t\"\n";
	cin >> L;
	cout << "\nwhat step size?\n";
	double sp;
	cin >> sp;
	
	double t = 0;
	double x = 0;
	double v = 0;
	
	int nstep = ceil(L/sp);
	for (int i=0 ; i <= nstep ; i++)
	{
		
		cout << "t: " << fixed << setprecision(4) << t << "     x: " << x << "     v: " << v << endl;
		t += sp;
		v = 9.806*t;
		x = (pow(t,2)*9.806)/2;
	}
	}
	return(0);
}