#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p,p1,max_p=0;
	    cin>>n>>p;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    p1=p;max_p=p;
	    for(int i=0;i<n;i++)
	    {
	        p1=p1+a[i];
	        max_p=max(max_p,p1);
	        //cout<<p<<"  "<<max_p<<endl;
	    }
	    cout<<max_p<<endl;
	}
	return 0;
}

