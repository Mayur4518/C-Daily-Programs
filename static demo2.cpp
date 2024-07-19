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
};
int main()
{
	Demo::add(10,20);
}
