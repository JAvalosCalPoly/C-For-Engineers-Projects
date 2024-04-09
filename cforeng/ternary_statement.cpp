#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // ternary statement (pg 72->)
	cout << "type x :" << endl;
	int x;
	cout >> x;
    int y;
    if (x == 0) {
        y = 0;
    } else {
        y = 100;
    }

    // shortcut for this:
    y = (x == 0) ? 0:100;


    // interesting example from the book, pg 75:
    (grade >= 60) ? cout << "Passed": cout << "Failed";

    return 0;
}

