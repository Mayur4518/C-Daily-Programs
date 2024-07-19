/*Create a class College containing data member as college id,college name,Establishment_year,University_name.
Write a C++ program with following member functions:
i.To accept n college details.
ii.To display college details of a specified university.
iii.To display college details according to specified year.
    (Use Array of Object and Function overloading)*/
using namespace std;
#include<iostream>
#include<string.h>
class College
{
	public:
		int id,year;
		char cname[20],univ[20];
		void accept()
		{
			cout<<"Enter college id name year and university name:";
			cin>>id>>cname>>year>>univ;
		}
		void disp(College ob[100],char un[20],int n)
		{
			for(int i=0;i<n;i++)
			{
				if(strcmp(ob[i].univ,un)==0)
				{
		          cout<<"\nCollege ID="<<ob[i].id;
		          cout<<"\nCollege Name="<<ob[i].cname;
		          cout<<"\nEstablishment year="<<ob[i].year;
		        }
		    }
		}
		void disp(College ob[100],int y,int n)
		{
			for(int i=0;i<n;i++)
			{
				if(ob[i].year==y)
				{
				  cout<<"\nCollege ID="<<ob[i].id;
		          cout<<"\nCollege Name="<<ob[i].cname;
		          cout<<"\nUniversity name="<<ob[i].univ;	
				}		
			}
			
		}
};
int main()
{
	College ob[100];
	int n,i,y;
	char un[20];
	cout<<"\nEnter limit:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ob[i].accept();
	}
	cout<<"\nEnter University name to search:";
	cin>>un;
	ob[i].disp(ob,un,n);
	cout<<"\nEnter year to search:";
	cin>>y;
	ob[i].disp(ob,y,n);
}
