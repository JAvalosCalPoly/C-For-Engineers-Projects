#include "P8.h"

double myCos(double x , double threshold)
{
	double sum = 0.0;
	int n=0;
	while (true)
	{
		double term = (pow(-1,n)/my2Fact(n))*pow(x,2*n+1);
		sum += term;
		if (term < threshold) {break;}
		n++;
	}
	return sum;
}

__int64 my2Fact(int n)
{
	__int64 result = 1;
	int in = 2*n;
	while(n > 0)
	{
		result = result *= in--;
	}
	return result;
}