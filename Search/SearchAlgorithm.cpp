// SearchAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This file contains the Binary and Linear search algorithm using C++
//

#include "pch.h"
#include <iostream>

#include<iostream>
using namespace std;


class Search {
public:int Binarysearch(int k,int a[],int i,int last);
public: int linearsearch(int k, int a[],int len);
private:
	int a[];
	
};




int main()
{
	int a[6] = { 1,4,5,6,7,};
	int len = sizeof(a) / sizeof(a[0]);
	
	cout << "Enter the element you want to search";
	int key;
	cin >> key;

	Search s;

	int j=s.Binarysearch(key,a,0,len-1);
	cout << "Binary Search: ";
	(j== -1) ? cout << "Element not found"<<"\n" : cout << "Element found at position " << j+1 << "\n";
	int k = s.linearsearch(key,a,len);
	cout << "Linear Search: ";
	(k == -1) ? cout << "Element not found"<<"\n" : cout << "Element found at position " << j + 1 << "\n";




}

int Search::Binarysearch(int k, int a[], int i, int last)
{
	if (last > i)
	{
           int mid = (i + last) / 2;


		if (k == a[mid])
		{
			return mid;
		}
		else if (k < a[mid])
		{
			return Binarysearch(k, a, i, mid);
		}
		else
		{
			return Binarysearch(k, a, mid + 1, last);
		}

	}
	return -1;
}

int Search::linearsearch(int k, int a[],int len)
{
	for (int i = 0;i < len;i++)
	{
		if (a[i] == k)
		{
			return i;
		}

	}
	return -1;
	
	
}

