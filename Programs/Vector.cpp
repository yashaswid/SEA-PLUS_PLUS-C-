// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> mylist;
	mylist.push_back(0);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(6);
	cout << "Normal addition";
	for (int i = 0;i < 5;i++)
	{
		
		cout << mylist[i] << "\n";
	}
	for (int i = 0; i < 5; i++)

	{
		mylist[i] *= 2;
	}
	cout << "multiplied value";
	for (int i = 0;i < 5;i++)
	{
		
		cout << mylist[i] << "\n";
	}
	
	vector<int>::iterator it;
	for (it = mylist.begin();it != mylist.end();it++)
	{
		cout<<*it;
	}
	it = mylist.begin();
	++it;
	mylist.insert(it,1);
	it = mylist.begin();
	++it;
	++it;
	mylist.insert(it,4);
	cout << "updated value using iterators";
	for (it = mylist.begin();it != mylist.end();it++)
	{
		
		cout << *it << "\n";
	}
}
