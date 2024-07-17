using namespace std;
#include<iostream>
class Distance
{
	public:
		int feet,inches;
		void accept(int feet1,int inches1)
		{
		 feet=feet1;
		 inches=inches1;	
		}
		void disp()
		{
			cout<<"Distance="<<feet<<" Foot "<<inches<<" inches";
		}
};
int main()
{
	Distance ob;
	int f,i;
	cout<<"Enter feet and inches:";
	cin>>f>>i;
	ob.accept(f,i);
	ob.disp();
}
