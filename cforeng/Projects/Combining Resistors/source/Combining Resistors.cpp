#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << "Start? type 1 for yes, 2 for no." << endl << endl;
	int beg;
	cin >> beg;
	
if (beg == 1){
while (true){
cout << "type 1 for serial or type 2 for parallel resistors. or type 0 to end program." << endl << endl;
	int ans;
cin >> ans;
double req = 0;
double R;
double recip = 0;
double aftp;
	if(ans == 1){
			while (true){
				cout << "type resistor value or type 0 to see results" << endl << endl; //0 is sentinel value
				cin >> R;
        	if (R == 0) { break; }
req = req + R;
}
cout << "Combined value = " << req << endl;
		
}	else if(ans == 2){
		    while (true){
				cout << "type resistor value or type 0 to see results" << endl<< endl; //0 is sentinel value
				cin >> R;
        	if (R == 0) { break; }
recip = recip + 1/R;
}
aftp = 1/recip;
cout << "Combined value = " << aftp << endl;

}
cout << "start over? type 1 for yes, 2 for no." << endl << endl << endl;
int ovr;
cin >> ovr;

if (ovr == 2) {break;}
}
}
return 0;
}