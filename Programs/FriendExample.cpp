// FriendExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


class Friendex {
private: int x;
public:
	void setx(int a);
	void print();
	friend void friendfunct(Friendex f1);
};

void Friendex::setx(int a)
{
	int x = a;
}

void Friendex::print()
{
	cout << "The value is " << x;
}


void friendfunct(Friendex f1)
{
	Friendex l;
	cout << "Now the main obj" << "\n";
	f1.x = 20;
	f1.print();
	cout << "Now the local obj" << "\n";
	l.x = 30;
	l.print();

}

int main()
{
	Friendex f;
	f.setx(10);
	f.print();

}
