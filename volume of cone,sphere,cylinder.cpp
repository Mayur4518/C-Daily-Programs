using namespace std;
#include<iostream>
class volume
{
	public:
		float v;
		void sphere(float r)
		{
			 v=(4/3)*3.14*r*r*r;
			cout<<"Volume of sphere="<<v<<endl;
		}
		void cone(float r,float h)
		{
			 v=0.3*3.14*r*r*h;
			cout<<"Volume of Cone="<<v<<endl;
		}
		void cylinder(float r,float h)
		{
			 v=3.14*r*r*h;
			cout<<"Volume of Cylinder="<<v;
		}
};
int main()
{
	volume v;
	float r,h;
	cout<<"Enter radius and height:";
	cin>>r>>h;
	v.sphere(r);
	v.cone(r,h);
	v.cylinder(r,h);
}

