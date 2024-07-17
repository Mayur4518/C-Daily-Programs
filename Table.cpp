//Accept two nos and display multiplication tables beetween those two nos.
using namespace std;
#include<iostream>
int main()
{
	int i,n,n1,j;
	cout<<"Enter Two No:";
	cin>>n>>n1;
	for(i=n;i<=n1;i++)
    {
    	for(j=1;j<=10;j++)
    	{
    	  cout<<i*j<<endl;
        }
	}
}
