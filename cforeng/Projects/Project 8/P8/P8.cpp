#include "P8.h"

double myCos(double x , double threshold)
{
	double sum = 0.0;
	int n=0;
	while (true)
	{
		double sterm = (pow(-1,n) * pow(x,2*n))/(myFact(2*n));
		sum += sterm;
		if ( abs(sterm) < threshold) {break;}
		n++;
	}
	return sum;
}

double mySin(double x , double threshold)
{
	double sum = 0.0;
	int n=0;
	while (true)
	{
		double term1 = pow(x,((2*n)+1))/(myFact((2*n)+1));
		double term2 = pow(-1,n);
		double sterm = term1*term2;
		sum += (sterm);
		if ( abs(sterm) < threshold) {break;}
		n++;
	}
	return sum;
}

__int64 myFact(int n)
{
	__int64 result = 1;
		while (n > 1) 
		{
			result *= n--;
		}
		return result;
}