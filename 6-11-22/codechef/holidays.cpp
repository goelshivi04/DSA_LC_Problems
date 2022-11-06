#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,w,sum=0;
	    cin>>n>>w;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n,greater<int>());
	    
	    for(i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	        if(sum>=w)
	        break;
	    }
	    cout<<n-i+1-2<<endl;
	    
	    
	}
	return 0;
}
