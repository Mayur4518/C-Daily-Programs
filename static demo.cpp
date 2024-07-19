using namespace std;
#include<iostream>
class Demo
{
	public:
		 void show()
		{
			static int a;
			a++;
			cout<<"\nValue="<<a;
		}
}ob;
int main()
{
	ob.show();
	ob.show();
	ob.show();
}
