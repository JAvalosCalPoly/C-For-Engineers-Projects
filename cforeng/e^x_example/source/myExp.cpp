// myExp.cpp
// Function implimentation or function body
#include "myExp.h"

double myExp(double x , double threshold)
{
	double sum = 0.0;
	int n=0;
	while (true)
	{
		double term = pow(x,n)/myFact(n);
		sum += term;
		if (term < threshold) {break;}
		n++;
	}
	return sum;
}

__int64 myFact(int n)
{
	__int64 result = 1;
	while(n > 1)
	{
		result *= n--;
	}
	return result;
}