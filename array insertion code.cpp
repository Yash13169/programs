#include <iostream>
using namespace std;
int main()
{
	int a[100],i,n,b[100],insert,position;
	cout<<"enter no. of elements"<<endl;
	cin>>n;
	cout<<"the elements are"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	cout<<"enter element you want to insert"<<endl;
	cin>>insert;
	cout<<"enter position to store the element"<<endl;
	cin>>position;
	for(i=n-1;i>=position;i--)
	{
		a[i+1]=a[i];
	}
	a[position]=insert;
	n+=1;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
