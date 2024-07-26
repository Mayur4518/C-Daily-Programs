//Merge sort recursively.
using namespace std;
#include<iostream>
void merge(int a[100],int left,int mid,int right)
{
	int i,j,k;
	int n1=mid-left+1;
	int n2=right-mid;
	int a1[n1],a2[n2];
	
	for(i=0;i<n1;i++)
	a1[i]=a[left+i];
	for(i=0;i<n2;i++)
	a2[i]=a[mid+1+i];
	
	i=0,j=0,k=left;
	while(i<n1 && j<n2)
	{
		if(a1[i]<=a2[j])
		  a[k++]=a1[i++];
		else
		  a[k++]=a2[j++];
	}
	while(i<n1)
	{
		a[k++]=a1[i++];
	}
	while(j<n2)
	{
		a[k++]=a2[j++];
	}
}
void mergesort(int a[100],int left,int right)
{
	if(left<right)
	{
		int mid=(left+right)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	  cout<<" "<<a[i];
	  cout<<endl;
}
int main()
{
	int a[100],n,i;
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter n numbers";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"Original Array:"<<endl;
	printarray(a,n);
	
	mergesort(a,0,n-1);
	
	cout<<"Sorted array:"<<endl;
	printarray(a,n);
	return 0;
}
