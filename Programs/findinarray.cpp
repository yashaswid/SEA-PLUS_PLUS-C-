#include<iostream>
using namespace std;


int find(int a[], int size,int k)
{
	
	while(i<size && a[i]!=k)
	{
		i++;
	}
	return i;
	
}


int main()
{
	int a[5]={2,3,4,6,7};
	int size=5;
	int k=3;
int c=	find(a,size,k);
cout<<c;
	}
