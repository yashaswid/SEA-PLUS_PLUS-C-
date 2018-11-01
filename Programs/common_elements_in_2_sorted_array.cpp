#include<iostream>
using namespace std;

int frequent(int a[],int b[],int size_a,int size_b)
{
		int size_c=max(size_a,size_b);
	int c[size_c];
	int i=0;;
	int j=0;
	cout<<"the common elements of the 2 arrays are"<<"\n";
	while(i<size_a && j<size_b)	
	{
		if(a[i]==b[j])
			{
				c[i]=b[j];
					cout<<c[i]<<"\n";
					i++;
					j++;
				}
			
			else if(a[i]>=b[j])
			{
				j++;
			}
			else if (a[i]<=b[j])
			{
				i++;
			}
				}
				
				
				
				
				
	}	





int main()
{
	
	int a[]={1,2,3,6,8,9};
	int b[]={1,2,3,6,7,3};
	int size_a=sizeof(a)/sizeof(a[0]);
	int size_b=sizeof(b)/sizeof(b[0]);
	
frequent(a,b,size_a,size_b);
}
