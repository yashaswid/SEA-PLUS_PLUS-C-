/*============================================================================= 
#  Author:          yashaswi 
#  FileName:        array_traverse.cpp 
#  Description:     Array traverse
      
=============================================================================*/ 
#include<iostream>
using namespace std;

int traverse(int a[],int n)

{

for(int i=0;i<n;i++)
{
	cout<<a[i];
	cout<<"\n";
	}	
	
}

int main()
{
	int a[]={1,2,3,4,5};
	traverse(a,5);
	
}
