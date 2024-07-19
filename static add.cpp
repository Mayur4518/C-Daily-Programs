using namespace std;
#include<iostream>
class Demo
{
	public:
		 static void add(int a,int b)
		{
			int c=a+b;
			cout<<"\nAddition="<<c;
		}
}ob;
int main()
{
	Demo ob;
	ob.add(10,20);
	Demo::add(30,15);
}
