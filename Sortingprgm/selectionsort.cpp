/*============================================================================= 
#  Author:          yashaswi 
#  FileName:        selectionsort.cpp 
#  Description:     selection sort
      
=============================================================================*/ 
#include<iostream>
using namespace std;

int main()
{
	
	int a[]={2,3,1,4};
	int min=0;
	int n=sizeof(a)/sizeof(a[0]);
	

	for(int i=0;i<n;i++)
	{
	     min=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[min])
				{
					min=j;
				
				}
					
		}
		
					int temp=a[i];
					a[i]=a[min];
					a[min]=temp;
				
		}
		cout<<"sorted array is"<<"\n";
		for(int i=0;i<n;i++)
		
		{
			cout<<a[i]<<"\t";
		}
		
}
