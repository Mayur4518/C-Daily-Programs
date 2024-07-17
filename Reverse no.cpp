//Accept number and reverse it.
using namespace std;
#include<iostream>
int main()
{
	int r,n,d;
	cout<<"Enter No:";
	cin>>n;
	while(n>0)
	{
	   d=n%10;
	   r=r*10+d;
	   n=n/10;
	}
	cout<<"Reverse No="<<r;
}
