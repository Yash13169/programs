#include <iostream>
using namespace std;
int main()
{
	int x[10][10],y[10][10],z[10][10],r1,c1,r2,c2,j,a,b,k,sum=0;
	k:
	cout<<"enter rows of matrix 1 (max 10)"<<endl;
	cin>>r1;
	cout<<"enter columns of matrix 1 (max 10)"<<endl;
	cin>>c1;
	cout<<"enter rows of matrix 2 (max 10)"<<endl;
	cin>>r2;
    cout<<"enter columns of matrix 2 (max 10)"<<endl;
    cin>>c2;
    if(r1!=c2)
    {
    	cout<<"error"<<endl<<"the number of rows of matrix 1 is not equal to no. of columns of matrix 2"<<endl;
    	cout<<"enter 1 to go back"<<endl<<"enter 2 to exit program"<<endl;
		cin>>j;
		if(j==1)
		{
			goto k;
		}
		else if(j==2)
		{
			goto l;
		}
		else 
		{
			cout<<"error"<<endl<<"restarting the program ";
			goto k;
		}	
	}
	else
	{
	    cout<<"enter elements of matrix 1 "<< endl;
        for(a=0;a<r1;a++)
		{
			for(b=0;b<c1;b++)
			{
			    cout<<"enter matrix 1's"<<" "<<a+1<<b+1<<" "<<"element";
				cin>>x[a][b];
			}
		}
		cout<<"matrix 1 is"<<endl;
		for(a=0;a<r1;a++)
		{
			for(b=0;b<c1;b++)
			{
				cout<<" "<<x[a][b]<<" ";
			}
			cout<<endl;
		}
		 cout<<"enter elements of matrix 2 "<< endl;
        for(a=0;a<r2;a++)
		{
			for(b=0;b<c2;b++)
			{
				cout<<"enter matrix 2's"<<" "<<a+1<<b+1<<" "<<"element";
				cin>>y[a][b];
			}
		}
		cout<<"matrix 2 is"<<endl;
		for(a=0;a<r2;a++)
		{
			for(b=0;b<c2;b++)
			{
				cout<<" "<<y[a][b]<<" ";
			}
			cout<<endl;
		}
		cout<<"the product of these matrices is"<<endl;
		 for(a=0;a<r1;a++)
		{
			for(b=0;b<c2;b++)
			{
				for(k=0;k<c1;k++)//k variable isliye liya hai kyoki 2 matrices ko multiply kiya hai to unka order likh ke dekhna
				{
				sum+=x[a][k]*y[k][b];//matrix ke multiplication ka formula hai likh ke dekhna ,+= matlab summation
		     	}//pehle a=0,b=0,k=0 hota hai answer aajata hai phir sum me store hota hai phir a=0,b=0,k=1 hojata hai phir sum me store hota hai and so on...
		     	z[a][b]=sum;
			    sum=0;
			}			
		}
	for(a=0;a<r2;a++)																							
		{
			for(b=0;b<c2;b++)
			{
				cout<<" "<<z[a][b]<<" ";
			}
			cout<<endl;
		}	
    } 
	l:
	return 0;
}
