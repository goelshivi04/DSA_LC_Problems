#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    int max1=a[0],min1=a[0];
	    for(int i=0;i<n;i++)
	    {
	        max1=max(a[i],max1);
	        min1=min(a[i],min1);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==min1)
	        {
	            cout<<min1<<" "<<max1<<endl;
	            break;
	        }
	        if(a[i]==max1)
	        {
	            cout<<max1<<" "<<min1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
