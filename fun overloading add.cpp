using namespace std;
#include<iostream>
class Demo
{
	public:
		void add(int a,int b)
		{
			int c=a+b;
			cout<<"\nAddition="<<c;
		}
		void add(int a,int b,int c)
		{
			int d=a+b+c;
			cout<<"\nAddition2="<<d;
		}
		void add(float a,float b)
		{
			float c=a+b;
			cout<<"\nAddition3="<<c;
		}
};
int main()
{
	Demo ob;
	ob.add(10,20);
	ob.add(10,5,5);
	ob.add(5.5f,6.3f);
}
