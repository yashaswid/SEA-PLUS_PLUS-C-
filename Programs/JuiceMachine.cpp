// JuiceMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Jmachine {

private:
	int depositinitial = 100;
	int apple;
	int mango;
	int banana;

public:
	void displayItems();
	void selectItem(int i);
	void itemCost(int c);
	void depositMoney(int mon,int ori);
	Jmachine();
	Jmachine(int a,int b,int c);
};

Jmachine::Jmachine()
{

}
Jmachine::Jmachine(int a,int b,int c)
{
	int apple = a;
	int banana = b;
	int mango = c;
}


int main()
{
	Jmachine j(5,10,15);
	j.displayItems();
}

void Jmachine::displayItems()
{
	int itemno;
	cout << "Welcome to Kp's Shop" << "\n";
	cout << "Select 1 for Apple Juice" << "\n";
	cout << "Select 2 for Banana Juice" << "\n";
	cout << "Select 3 for Mango Juice" << "\n";
	cin >> itemno;
	
	selectItem(itemno);
	
}

void Jmachine::selectItem(int i)
{
	int item = i;
	switch (item)
	{

	case 1:
		cout << "you choice is Apple Juice"<<"\n";
		break;
		
	case 2:
		cout << "you choice is Banana Juice" << "\n";
		break;

	case 3:
		cout << "you choice is Mango Juice" << "\n";
		break;
	
		
	}
	itemCost(item);

}

void Jmachine::itemCost(int c)
{
	int cost = c;
	int in;
	switch (cost) {
	case 1:
	{
		cout << "Cost : " << "\t" "$5" << "\n";
		cout << "Please deposit $5" << "\n";
		
		break;
	}
	case 2:
	{
		cout << "Cost : " <<"\t"<< "$10" << "\n";
		cout << "Please deposit $10" << "\n";
		break;
	}
	case 3:
	{
		cout << "Cost : " << "\t" << "$15" << "\n";
		cout << "Please deposit $15" << "\n";
		break;
	}
	}
	cin >> in;
	depositMoney(in,cost);
}

void Jmachine::depositMoney(int mon,int ori)

{
	int fin;
	if (ori == 1)
	{
		 fin = mon - 5;
		 depositinitial = depositinitial + 5;
	}
	else if (ori == 2)
	{
		 fin = mon - 10;
		 depositinitial = depositinitial + 10;
	}
	else {
		 fin = mon - 15;
		
		 depositinitial = depositinitial + 15;
	}
	
	cout << "Please collect your item below, and dont forget to collect your change"<<"\t" << fin<<"\n";
	cout << " Thank you for shopping at KP's,COME AGAIN ! ";
	
	

}

 