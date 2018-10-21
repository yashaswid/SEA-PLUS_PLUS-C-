/*============================================================================= 
#  Author:          yashaswi 
#  FileName:        binarysearch.cpp 
#  Description:     Binary search
      
=============================================================================*/ 
#include<iostream>
using namespace std;
class Binarysearch
{
	public:
		
		int find(int a[],int n,int l,int r)
		{
			int mid=((l+r)/2);
			if(a[mid]==n)
			{
				return mid;
			}
			 if(n>a[mid])
			{
			return 	find(a, n, mid+1, r);
				
			}
				 if(n>a[mid])
			{
			return 	find( a, n, l, mid+1);
				
			}
					
		}
};
int main()
{
	int a[]={2,3,4,10,40};
	int n = sizeof(a)/ sizeof(a[0]); 
	int k=10;
	Binarysearch b;
	int s= b.find(a,k,0,n-1);
	cout<<"The element is found at position"<<"\t"<<s;
	
}
