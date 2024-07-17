using namespace std;
#include<iostream>
class Area
{
	public:
		void circle(float r)
		{
			float a=3.14*r*r;
			cout<<"Area of Circle="<<a<<endl;
		}
		void rectangle(float l,float b)
		{
			float a=l*b;
			cout<<"Area of Rectangle="<<a<<endl;
		}
		void triangle(float b,float h)
		{
			float a=(0.5)*b*h;
			cout<<"Area of Triangle="<<a;
		}
};
int main()
{
	Area ob;
	float r,l,b,h;
	cout<<"Enter radius:";
	cin>>r;
	ob.circle(r);
	cout<<"Enter length and breadth:";
	cin>>l>>b;
	ob.rectangle(l,b);
	cout<<"Enter base and height:";
	cin>>b>>h;
	ob.triangle(b,h);
}
