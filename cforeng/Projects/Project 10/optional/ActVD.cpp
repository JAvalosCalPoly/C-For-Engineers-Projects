#include <iostream>
#include <cmath>
#include "Vel_Dist.h"
using namespace std;

    extern double * xPtr = &x;
	extern double  * vPtr = &v;
	extern double x = 0;
	extern double v = 0;

double VelCalc (double g , double t)
{

    double ans = g*t;
    *vPtr = ans;

}

double DistCalc (double g , double t)
{

    double ans = (pow(t,2)*g)/2;
    *xPtr = ans;

}