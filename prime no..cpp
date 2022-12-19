#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout<<"enter a no.";
	cin>>a;
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0 && i!=1)
		{
			cout<<"the no. is not prime";
			exit(1);	
		}	
	}
	    cout<<"the no. is prime";
	return 0;
}
