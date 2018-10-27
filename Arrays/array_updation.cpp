/*============================================================================= 
#  Author:          yashaswi 
#  FileName:        array_updation.cpp 
#  Description:     Array Updation
      
=============================================================================*/ 
#include<iostream>
using namespace std;


void updation(int a[], int position,int n,int ele)
{
	
	cout<<"elements before updating";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
	
	a[position]=ele;
	
	cout<<"elements after updating";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}

}


int main()
{
	int a[]={1,2,3,4,6,6};
	int n=sizeof(a)/sizeof(a[0]);
	int e=5;
	int k=4;
	updation(a,k,n,e);
	
}

