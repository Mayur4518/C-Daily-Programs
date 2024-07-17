//Accept n emp info and accept emp no to search record.
using namespace std;
#include<iostream>
#include<string.h>
class Emp
{
	public:
		int eno,sal;
		char name[20];
		void accept(int eno,char name[20],int sal)
		{
			this->eno=eno;
			strcpy(this->name,name);
			this->sal=sal;
		}
		void disp()
		{
			cout<<"\nRecord Found";
			cout<<"\nEmp No="<<eno;
			cout<<"\nEmp Name="<<name;
			cout<<"\nEmp Sal="<<sal;
		}
};
int main()
{
	Emp ob[100];
	int n,no,s,i,num;
	char name[20];
	cout<<"Enter limit:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter eno ename and salary:";
		cin>>no>>name>>s;
		ob[i].accept(no,name,s);
	}
	cout<<"Enter Emp NO to search:";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(ob[i].eno==num)
		{
			break;
		}
	}
	if(i!=n)
	{
		ob[i].disp();
	}
	else
	  cout<<"\nRecord Not Found";
}
