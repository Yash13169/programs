#include <iostream>
using namespace std;
int main()
{
	int a,temp,c,sum; 
	cout<<"enter a no.";
	cin>>a;
	temp=a;
	while(a>0)
	{
		c=a%10;
		sum=sum*10+c;
		a=a/10;
	}
	if(temp==sum)
	cout<<"the no. is plaindrome";
	else 
	cout<<"the no. is not plaindrome";
	return 0;
}
