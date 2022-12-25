#include <iostream>
using namespace std;
int main()
{
	int k,a[k],i,max;
	cout<<"enter no. of elements you want to sort"<<endl;
	cin>>k;
	cout<<"enter integers"<<endl;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<k;i++)
	{
	if(max<a[i])
	max=a[i];
	cout<<" "<<max;
	}
	return 0;
}
