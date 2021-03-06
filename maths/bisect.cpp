// find the root of x^2-3x=2 at the [3,4] using the bisect algorithm 
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
const double a = 3, b = 4;
double f(double x);
//the value of f(x)=x^2-3x-2
double bisect( double error, double a, double b);
//finds root at the [3,4] with |realroot-root|<error
int main()
{
	double z1 = f(a);
	double z2 = f(b);
	if (z1*z2 < 0)
		cout << "ok"<<endl;
	cout<<bisect(0.00005,a,b );
    return 0;
}

double f(double x)
{
	double y;
	y = pow(x, 2) - 3 * x - 2;
	return y;
}

double bisect(double error, double a,double b)
{
	while ( (b - a)> error)
	{
		double y = (b + a) / 2;
		double z1 = f(a);
		double z2 = f(y);
		double k = z1 * z2;
		if (k < 0)
		{
			b = y;
		}
		else if (k>0)
		{
			a = y;
		}
		else if (k == 0)
		{
			cout << "The root is " << y << endl;
			break;
		}
		bisect(error, a, b);
	}
	
	double z = abs((b - a) / 2);
	return z;
	
}
