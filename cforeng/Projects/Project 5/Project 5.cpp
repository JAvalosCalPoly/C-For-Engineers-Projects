#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	
	cout << "What is the data size?" << endl<<endl;
	int N;
	cin >> N;
	int cnt = 0;
	double xsum;
	double x;
	double spwr = 0;
	double s;
	double sxi;
	
	cout << endl << "For the mean" << endl<<endl;
		for(int cnt = 0; cnt<N;cnt++){
			
			cout << "Enter a value ... " <<endl<<endl;
			double xxi;
			cin >> xxi;
			xsum += xxi;
		}
	
	x = xsum/N;
	
	cout << endl << "for the variance" <<endl<<endl;
		for(int cnt = 0; cnt<N;cnt++){
		
			cout << "Enter a value ... " <<endl<<endl;
			cin >> sxi;
			spwr += pow(sxi-x,2);
		}

	s = spwr/(N-1);
	
	cout << "The mean for your data is: " << x << endl<<endl;
	cout << "The variance for your data is: " << s << endl<<endl;
	return(0);
}