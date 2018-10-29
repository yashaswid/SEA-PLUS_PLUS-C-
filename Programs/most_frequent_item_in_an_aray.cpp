#include<iostream>
using namespace std;

void frequent(int a[],int len);
void display(int countsave1,int temp1);

int main()
{
	
	int a[]={1,5,4,4,4,4,4,4,4,1,5,2,5,4};
	int size=sizeof(a)/sizeof(a[0]);
	frequent(a,size);	
}

void frequent(int a[],int len)
{
	int count=0;
	int max_count=0;
	int max_val=0;
	for(int i=0;i<len;i++)
  {
  	for(int j=0;j<len;j++)
  	{
  		if( (a[i]==a[j])&& i!=j )
         {
         	 count++;
         	 if( count>max_count)
         	 {
         	 	 max_count=count;
                 max_val=a[i];
			  }
         	
				   }  
    	  }
		  count=0;
		  	  
  }
  display(max_count+1,max_val);
}

void display(int countsave1,int temp1)
{
	cout<<temp1<<" is appeared "<<countsave1<<" times";
}

