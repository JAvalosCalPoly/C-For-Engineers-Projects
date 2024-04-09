#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

cout << "Polar form imaginary to Rectangular form / Rectangular form to Polar form imaginary" << endl;
cout << endl <<"Type 1 to start with polar form or type 2 to start with rectangular:" << endl << endl;

int resp;
cin >> resp;

	if ( resp == 1 ){
		cout << endl << endl << "for polar in form Ae^j(theta) please select a value for \"A\": " << endl << endl;
		double Ap;
		cin >> Ap;
		cout << "Select a value for \"theta\": " << endl << endl;
		double Tp;
		cin >> Tp;

	double ap = Ap*cos(Tp);
	double bp = Ap*sin(Tp);

		cout << setprecision(3) << Ap << "exp(j" << Tp << ") = " << ap << "+j(" << bp << ")" << endl;
} 

	else if (resp == 2){
		cout << endl << endl << "for rectangular form a + j(b) please select a value for \"a\": " << endl << endl;
		double Ar;
		cin >> Ar;
		cout << "Select a value for \"b\": " << endl << endl;
		double Br;
		cin >> Br;

	double ar = sqrt((Ar*Ar) + (Br*Br));
	//double Frac = (double)Br/Ar;
	double tr = atan2 (Br,Ar);

		cout << setprecision(4) << Ar << " + j(" << Br << ") = " << ar << "exp(j" << tr << ")" << endl;
}

return 0;
}