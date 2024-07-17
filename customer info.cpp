//Accept customer info and display using function with argument,Accept values from user and pass to the function.
using namespace std;
#include<iostream>
#include<string.h>
class customer
{
	public:
		int id;
		char name[20],addr[20];
		long long contact;
		void accept(int id1,char name1[20],char addr1[20],long long int contact1)
		{
			id=id1;
			strcpy(name,name1);
			strcpy(addr,addr1);
			contact=contact1;
		}
		void disp()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Address="<<addr<<endl;
			cout<<"Contact="<<contact;
		}
};
int main()
{
	customer ob;
	int id;
	char name[20],addr[20];
	long long int contact;
	        cout<<"Enter id:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter address:";
			cin>>addr;
			cout<<"Enter contact No:";
			cin>>contact;
	ob.accept(id,name,addr,contact);
	ob.disp();
}
