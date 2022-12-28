#include <iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,i;
	    cin>>n;
	    int a[n];
	    int chef[n],chefina[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>chef[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>chefina[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(chef[i]==0||chefina[i]==0)
	        {
	        
	        count=0;
	        }
	        else 
	        {
	        count++;
	        }
	       a[i] =count;
	    }
	    int max;
	    max=a[0];
	    for(i=0;i<n;i++)
	    {
	        if(max<a[i])
	        max=a[i];
	    }
	    cout<<max<<endl;
	}
	
	return 0;
}
