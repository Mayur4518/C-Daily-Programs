using namespace std;
#include<iostream>
int main()
{
	int a[50],b[50],c[100],i,j,k,n1,n2,n3;
	cout<<"Enter limit of first array:";
	cin>>n1;
	cout<<"Enter elements in first array:";
	for(i=0;i<n1;i++)
	 cin>>a[i];
	
    cout<<"Enter limit of second array:";
    cin>>n2;
	cout<<"Enter elements in second array:";
	for(i=0;i<n2;i++)
	  cin>>b[i];
	  i=j=k=0;
	  n3=n1+n2; 
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		  c[k++]=a[i++];
		else
		  c[k++]=b[j++];
	}
	while(i<n1)
	 c[k++]=a[i++];
	while(j<n2)
	 c[k++]=b[j++];
	 
	 cout<<"Sorted array"<<endl;
	 for(k=0;k<n3;k++)
	 {
	 	cout<<c[k]<<" ";
	 }  
}
