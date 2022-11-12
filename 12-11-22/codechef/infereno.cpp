#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,max1=0,c=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        max1=max(max1,a[i]);
	    }
	    if(max1<=n)
	    cout<<max1<<endl;
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	            while(a[i]>0)
	            {
	                a[i]=a[i]-x;
	                c++;
	            }
	        }
	         cout<<min(c,max1)<<endl;
	    }
	   
	}
	return 0;
}
