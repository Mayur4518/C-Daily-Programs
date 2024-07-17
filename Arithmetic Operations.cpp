using namespace std;
#include<iostream>
class ArithmeticOperation
{
	public:
		int c;
		void add(int a,int b)
		{
			c=a+b;
			cout<<"Addition="<<c<<endl;
		}
		void sub(int a,int b)
		{
			c=a-b;
			cout<<"Substraction="<<c<<endl;
		}
		void multi(int a,int b)
		{
			c=a*b;
			cout<<"Multiplication="<<c<<endl;
		}
		void div(int a,int b)
		{
			c=a/b;
			cout<<"Division="<<c;
		}
};
int main()
{
	ArithmeticOperation ob;
	int a,b;
	cout<<"Enter Two nos:";
	cin>>a>>b;
	ob.add(a,b);
	ob.sub(a,b);
	ob.multi(a,b);
	ob.div(a,b);
}
