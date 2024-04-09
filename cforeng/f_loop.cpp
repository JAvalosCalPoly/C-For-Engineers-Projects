#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	
	// for loop pg 118
	cout << "enter values to sum" << endl;
	int nVals;
	cin >> nVals;
	
	int cnt = 0;
	int sum = 0;
	for (int cnt = 0; cnt < nVals; cnt++){
		
		cout << "Enter a value" << endl;
		int val;
		cin >> val;
		sum += val;
		
		
	}
	cout << "sum is " << sum << endl;
	return(0);
}