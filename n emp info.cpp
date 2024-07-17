//Accept n emp info and display
using namespace std;
#include<iostream>
class emp
{
	public:
		int eno;
		char ename[20];
		int sal;
		void accept()
		{
			cout<<"Enter eno ename and sal:";
			cin>>eno>>ename>>sal;
		}
		void disp()
		{
			cout<<"\nEmp No="<<eno;
			cout<<"\nEmp Name="<<ename;
			cout<<"\nEmp Salary="<<sal;
		}
};
int main()
{
	emp ob[100];
	int n,i;
	cout<<"Enter limit:";
	cin>>n;
	for(i=0;i<n;i++)
	  ob[i].accept();
	for(i=0;i<n;i++)
	  ob[i].disp();
}
