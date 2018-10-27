/*============================================================================= 
#  Author:          yashaswi 
#  FileName:        array_insertion.cpp 
#  Description:     Array Insertion
      
=============================================================================*/ 
#include<iostream>
using namespace std;
int insertion(int a[],int position,int element,int n)
{
	cout<<"elements before insertion";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
	int j=n;
while(j>=position)
{
a[j+1]=a[j]	;
	j--;
}

a[position]=element;
n=n+1;

	cout<<"elements after insertion";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
}

int main()
{
	int a[]={1,2,3,5};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	int e=4;
	insertion(a,k,e,n);
	
}
