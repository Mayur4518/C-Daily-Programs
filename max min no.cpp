//Accept two nos and display maximum and minimum no using class and object.
using namespace std;
#include<iostream>
class Demo
{
	public:
		void max(int a,int b)
		{
			if(a>b)
			 cout<<"Maximum No="<<a<<endl;
			else
			 cout<<"Maximum No="<<b;
		}
		void min(int a,int b)
		{
			if(a<b)
			 cout<<"Minimum No="<<a<<endl;
			else
			 cout<<"Minimum No="<<b;
		}
};
int main()
{
	Demo ob;
	int a,b;
	cout<<"Enter Two nos:";
	cin>>a>>b;
	ob.max(a,b);
	ob.min(a,b);
}
