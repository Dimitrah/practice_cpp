//calculate the triangle numbers
#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;


int tri(int z);
void Tri();


int main()
{
	Tri();
    return 0;
}

int tri(int z)
{
	if (z < 0)
	{
		cout << "I need an integer bigger or equal to 0" << endl;
		Tri();
		return 0;
	}
	else if (z == 0)
	{
		return 0;
	}
	else 
	{
		int k = pow(z,2) - tri(z-1);
		return k;
	}
}
void Tri()
{
	int z;
	cout << "which triangle number do you want" << endl;
	cin >> z;
	cout << "The number " << z << "triangle number is " << tri(z) << endl;
	int y;
	cout << "Do you want enother triangle number? 1(for Yes)" << endl;
	cin >> y;
	if (y == 1)
	{
		Tri();
	}
}
