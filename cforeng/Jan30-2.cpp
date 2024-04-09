#include <iostream>

using namespace std;

int main()
{
	
	// sizeof() operator/function, pg 308
	// tells the size in bytes of various types

	int i1;
	cout << "int is: " << sizeof(i1) << " bytes." << endl";

	// easier:

	cout << "int is: " << sizeof(int) << " bytes." << endl";


	return 0;
}