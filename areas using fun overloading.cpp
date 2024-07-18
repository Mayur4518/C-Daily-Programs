using namespace std;
#include<iostream>
#include<conio.h>
  void area(float r,int l)
  {
  	float a=3.14*r*(r+l);
  	cout<<"\nArea of Cone="<<a;
  }
  void area(float r)
  {
  	float a=4*3.14*r*r;
  	cout<<"\nArea of Sphere="<<a;
  }
  void area(int r)
  {
  	int a=3.14*r*r;
  	cout<<"\nArea of Circle="<<a;
  }
  int main()
  {
  	area(4.12f,5);
  	area(4.5f);
  	area(8);
  	area(2.2f,3);
  }
