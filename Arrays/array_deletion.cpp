/*============================================================================= 
#  Author:          yashaswi 
#  FileName:        array_deletion.cpp 
#  Description:     Array Deletion
      
=============================================================================*/ 
#include<iostream>
using namespace std;


void deletion(int a[], int position,int n)
{
	
	cout<<"elements before insertion";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
	int j=position;
	while(j<n)
	{
		a[j-1]=a[j];
		j++;
	}
	
	n=n-1;
	
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
	int a[]={1,2,3,4,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int k=4;
	deletion(a,k,n);
	
}
