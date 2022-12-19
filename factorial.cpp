#include <iostream>
using namespace std;
int main()
{
	int a,mul=1;
	cout<<"enter a no.";
	cin>>a;
	if(a==0)
	cout<<"1";
	else
	{
		for(;a>0;a--)
		{
			mul=mul*a;
		}
		cout<<mul;
	}
	return 0;
}
