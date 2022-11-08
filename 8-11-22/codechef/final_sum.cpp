#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q,sum=0;
	    cin>>n>>q;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    while(q--)
	    {
	        int l,r;
	        cin>>l>>r;
	        if((l+r+1)%2!=0)
	        sum++;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
