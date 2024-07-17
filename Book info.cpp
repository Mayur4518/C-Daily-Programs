/*Create a class Book(bno,bname,author,publication,price,quantity) accept book info,calculate
 total amount of book and display...accept info in main()*/
using namespace std;
#include<iostream>
#include<string.h>
class Book
{
	public:
		int bno,amount;
		char bname[20],author[20],publication[20];
		int price,quantity;
		void accept(int no,char name[20],char author1[20],char pub[20],int p,int q)
		{
			bno=no;
			strcpy(bname,name);
			strcpy(author,author1);
			strcpy(publication,pub);
			price=p;
			quantity=q;
		}
		void calculate()
		{
		  amount=price*quantity;	
		}
		void disp()
		{
			cout<<"Total amount of book="<<amount;
		}
};
int main()
{
	Book ob;
	int no,p,q;
	char name[20],auther[20],pub[20];
	cout<<"Enter Book No:";
	cin>>no;
	cout<<"Enter Book Name:";
	cin>>name;
	cout<<"Enter auther Name:";
	cin>>auther;
	cout<<"Enter Publication:";
	cin>>pub;
	cout<<"Enter price:";
	cin>>p;
	cout<<"Enter Quantity:";
	cin>>q;
	ob.accept(no,name,auther,pub,p,q);
	ob.calculate();
	ob.disp();
}
