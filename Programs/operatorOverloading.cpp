// operatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Opeartorexample {
private:
	int length;
	int width;
public:
	Opeartorexample operator+(Opeartorexample const&);
	Opeartorexample operator*(Opeartorexample const&);
	void setDimension(int l, int w);
	void print();
	Opeartorexample(int l,int w);
	Opeartorexample();


};
Opeartorexample Opeartorexample::operator+(Opeartorexample const& r)
{
	Opeartorexample o;
	o.length = length + r.length;
	o.width = width + r.width;
	return o;
}

Opeartorexample Opeartorexample::operator*(Opeartorexample const & r)
{
	Opeartorexample o;
	o.length = length * r.length;
	o.width = width * r.width;
	return o;
}

void Opeartorexample::setDimension(int l, int w)
{
	length = l;
	width = w;
}

void Opeartorexample::print()
{
	cout << length << "\n";
	cout << width << "\n";
}

Opeartorexample::Opeartorexample(int l, int w)
{
	length = l;
	width = w;
}

Opeartorexample::Opeartorexample()
{
}



int main()
{
	
	Opeartorexample x;
	Opeartorexample(2, 2);
	x.setDimension(1, 2);
	Opeartorexample y;
	y.setDimension(2, 3);
	Opeartorexample s=   x.operator*(y);
	s.print();
    Opeartorexample k= x.operator+(y);
	k.print();
}