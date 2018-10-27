//Binarysearch
#include<iostream>
using namespace std;

int binarysearch(int a[],int k, int first,int last)
{

	int mid=(first+last)/2;
	if(a[mid]==k)
	{
		return mid;
	}
	if(k>a[mid])
      {
     return 	binarysearch(a,k,mid+1,last);
	  }

	else
	{
	return	binarysearch(a,k,first,mid-1);
	}
	return -1;
}



int main()
{
	int a[]={1,2,3,4,5,6};
	int k=3;
	int n=sizeof(a)/sizeof(a[0]);
	int result=binarysearch(a,k,0,n-1);
	cout<<"found at position"<<result;
}
