#include <iostream>
using namespace std;
int main()
{
	int a,i,c=1,d=1,sum=1;
	cout<<"enter a number";
	cin>>a;
	if (a==1)
	cout<<"0";
	else if(a==2)
	cout<<"0 1";
	else if (a>2)
	{
		cout<<"0 1";
		for(i=2;i<a;i++)
		{
		    c=d;
			cout<<" "<<sum;
			d=sum;
			sum = c+d;
		}
		 
	}
	return 0;
}
