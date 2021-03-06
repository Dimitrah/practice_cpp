#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void BuildBinomialTree(int A[],int low,int high);
int FindSecondMax(int A[], int low, int high);
void swap(int A[],int[]);

int main()
{
	int a[100];
	int n=8;
	for(int i=1;i<=n;i++)
	{
		cout << "Which is the number " << i << " element of the array?" << endl;
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " " << endl;
	}

	//which is the second biggest element of the array?

	cout << "The Second biggest element of the array is " << FindSecondMax(a, 1, 8) << endl;

    return 0;
}

int low = 1; 
int high = n;
void BuildBinomialTree(int A[],int low, int high)
{
	if (high > low)
	{
		int mid = (high+low)/2;
		BuildBinomialTree(A, low, mid);
		BuildBinomialTree(A, mid+1, high);
		if (A[mid] > A[high])
		{
			swap(A[low],A[high]);

		}
	}
}

int FindSecondMax(int A[], int low, int high)
{
	BuildBinomialTree(A, low, high);
	int SecondMax = high - 1;
	int n = high - low + 1;
	for (int i = 1; i < log(n) - 1; i++)
	{
		if (A[high - pow(2, i) > A[SecondMax]])
			SecondMax = high - pow(2, i);
	}
	return SecondMax;
}

void swap(int low, int mid, int A[], int mid2, int high)
{
	for (int i = low; i < mid2; i++)
	{
		int t = A[i];
		A[i] = A[mid2 + i - low];
		A[mid2 + i - low] = t;
	}
}