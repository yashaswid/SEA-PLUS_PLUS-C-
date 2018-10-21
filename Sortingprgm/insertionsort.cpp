#include<iostream>
using namespace std;

int main()
{
	
	int a[]={22,1,4,15,10};
	int n=(sizeof(a)/sizeof(a[0]));
	
	for (int i=1;i<=n-1;i++)
	{
		int j=i-1;
		int temp=a[i];
		
		while( temp<a[j] && i>=0)
		{
		
		a[j+1]=a[j];
		j--;
			
		}
		a[j+1]=temp;
		
		
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i]<<"\n";
	}
	
	
}
