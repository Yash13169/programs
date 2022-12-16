#include <iostream>
using namespace std;
class employee
{
	protected:
	char name[30];
	int age , exp;
	public:
	void getdata()
	{
	    cout<<"enter your name"<<endl;
		cin>>name;
		cout<<"enter your age"<<endl;
		cin>>age;
		cout<<"enter your experience"<<endl;
		cin>>exp;
	}	
	void printdata()
	{
		cout<<"the entered name is"<<" "<<name<<endl;
		cout<<"your age is"<<" "<<age<<"years"<<endl;
		cout<<"your experience is"<<" "<<"years"<<exp<<endl;
	}
};
int main()
{
	int q,i;
	cout<<"enter total no. of employees";
	cin>>q;
	for(i=0;i<q;i++)
	{
		int e[i];
		employee a;
		a.getdata();
		a.printdata();
	}
	return 0;
}
