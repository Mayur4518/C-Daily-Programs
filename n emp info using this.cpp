//Accept n emp info and display using this
using namespace std;
#include<iostream>
#include<string.h>
class Emp
{
	public:
		int eno,sal;
		char ename[20];
		void accept(int eno,char ename[20],int sal)
		{
			this->eno=eno;
			strcpy(this->ename,ename);
			this->sal=sal;
		}
	    void disp()
	    {
	    	cout<<"Emp No="<<eno;
	    	cout<<"Emp Name="<<ename;
	    	cout<<"Emp Salary="<<sal;
		}
};
int main()
{
	Emp ob[100];
	int n,i,no,s;
	char name[20];
	cout<<"Enter limit:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter eno ename and sal:";
		cin>>no>>name>>s;
		 ob[i].accept(no,name,s);
	}
	for(i=0;i<n;i++)
	{
		ob[i].disp();
	}
	
}
