#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));
    int iArray[100];
    for (int i = 0; i < 100; i++)
    {
        iArray[i]=1+rand()%1000;
        cout << iArray[i] << endl;
    }
    return 0;
}