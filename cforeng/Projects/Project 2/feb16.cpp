#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int math()
{

	//termary statement (pg 75->)
int y;
	if (x == 0) {
		y = 0;
} 	else {
		y = 100;
}

	//shortcut for this:

	y = (x == 0) ? 0:100;

	//interesting example from book pg 75

	(grade >=60) ? cout << "passed": cout << "failed";



	// page 78-> (while-loop)

	while (x < count) {
		statement1;
		statement2;
		.
		.
		.
}

	//counter controlled looping (pg 80->)

	cout << "enter number or times to loop: ";
	int Numloops;
	cin >> Numloops;

	int counter = 0
	while (counter < Numloops) {
		cout << "counter: " << counter << endl;
		counter = counter + 1 
}

	

return 0;
}