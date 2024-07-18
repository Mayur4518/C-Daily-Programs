using namespace std;
#include<iostream>
#include<conio.h>
void sort(int a[],int n)
{
  	for(int pass=1;pass<n;pass++)
  	{
  		for(int i=0;i<n-pass;i++)
  		{
  			if(a[i]>a[i+1])
  			{
  				int t=a[i];
  				a[i]=a[i+1];
  				a[i+1]=t;
			  }
		  }
	  }
	  cout<<"Sorted Integer array=";
	  for(int i=0;i<n;i++)
	  {
	   cout<<" "<<a[i];
      }
}
void sort(float a[],int n)
{
	for(int pass=1;pass<n;pass++)
	{
		for(int i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				float t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	cout<<"\nSorted Float array=";
	for(int i=0;i<n;i++)
	{
	  cout<<" "<<a[i];
    }
}
int main()
{
	int a[]={11,66,33,99,5,33,45,32};
	float b[]={10.51f,76.44f,67.99f,23.77f,55.32f};
	sort(a,8);
	sort(b,5);
}
