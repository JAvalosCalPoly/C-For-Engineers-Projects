#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // sentinel-controlled looping (pg 84->)....a better way than the book
    
    // "while-true with a break"
    int grade;
    int total = 0;
    int gradeCounter = 0;
    while (true) {
        cout << "Enter grade or -1 to quit: "; // -1 is the sentinel value
        cin >> grade;
        if (grade == -1) { break; }
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout << "grade: " << grade << ", total = " << total << ", gradeCounter = " << gradeCounter << endl;
     }

    return 0;
}