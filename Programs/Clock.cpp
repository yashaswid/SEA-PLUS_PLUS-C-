// Clock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Clock {
private:
	int hour;
	int minute;
	int second;
public:
	void print(int hr, int min, int sec);
	void setTime(int hr, int min, int sec);
	void incHr(int hr, int min, int sec);
	void incMin(int hr, int min, int sec);
	void incSec(int hr, int min, int sec);
	Clock();
	Clock(int hr, int min, int sec);
};


Clock::Clock()
{
	hour = 0;
	minute = 0;
	second = 0;
}
Clock::Clock(int hr, int min, int sec)
{
	hour = hr;
	second = sec;
	minute = min;
	setTime(hour, minute, second);
}
void Clock::print(int hr, int min, int sec)
{
	cout << "The time is" << hr << "hr:" << min << "min:" << sec << "sec"<<"\n";
}

void Clock::setTime(int hr, int min, int sec)
{
	if (hr > 0 && hr < 23)
	{
		hour = hr;
	}
	if (min > 0 && min < 59)
	{
		minute = min;

	}
	if (sec > 0 && sec < 59)
	{
		second = sec;
	}

	print(hour, minute, second);
}

void Clock::incHr(int hr, int min, int sec)
{
	hr++;
	if (hr > 0 && hr < 23)
	{
		print(hr, min, sec);
	}
	else {


		hr = 0;
		print(hr, min, sec);
	}
	
}

void Clock::incMin(int hr, int min, int sec)
{
	min++;
	if (min > 0 && min < 59)
	{
		incHr(hr, min, sec);
	}
	else {
		min = 0;
		incHr(hr, min, sec);
	}
	
}

void Clock::incSec(int hr, int min, int sec)
{
	sec++;
	if (sec > 0 && sec < 59)
	{
		incMin(hr, min, sec);

	}
	else {
		sec = 0;
		incMin(hr, min, sec);
	}
}
int main()
{
	Clock c;
	c.setTime(5, 10, 20);

	c.incHr(5, 10, 20);
	c.incMin(6, 59, 20);
	c.incSec(12, 59, 59);

}