#include "stdafx.h"
#include<iostream>
using namespace std;

int fib(int z);
void Fib();


int main()
{
	Fib();
	
    return 0;
}

int fib(int z)
{
	if (z < 1)
	{
		cout << "I need an integer bigger than 0"<<endl;
		return 0;
	}
	else if ((z == 1) || (z == 2))
	{
		return 1;
	}
	else
	{
		int k = fib(z - 1) + fib(z - 2);
		return k;
	}
}

void Fib()
{
	int z;
	cout << "which fibonacci number do you want" << endl;
	cin >> z;
	cout << "The number " << z << "fibonacci number is " << fib(z) << endl;
	int y;
	cout << "Do you want enother fibonacci number? 1(for Yes)" << endl;
	cin >> y;
	if (y == 1)
	{
		Fib();
	}
}
