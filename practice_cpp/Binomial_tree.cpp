#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

void BuildBinomialTree(int A[],int low,int high);
int FindSecondMax(int A[], int low, int high);
void swap(int low,int mid, int A[],int mid2, int high);

int main()
{
	int arr[100];
	int n=8;
	for(int i=1;i<=n;i++)
	{
		cout << "Which is the number " << i << " element of the array?" << endl;
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " " << endl;
	}

	//which is the second biggest element of the array?

	cout << "The Second biggest element of the array is " << FindSecondMax(arr, 1, 8) << endl;

    return 0;
}

int low = 1; 
int high = 8;
void BuildBinomialTree(int A[],int low, int high)
{
	if (high > low)
	{
		int mid = (low + high) / 2;
		BuildBinomialTree(A, low, mid);
		BuildBinomialTree(A, mid + 1, high);
		if (A[mid] > A[high])
		{
			swap(low,mid,A,mid+1,high);

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