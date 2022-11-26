#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    int mid=(n+k)/2;
	    
	    sort(a,a+n);
	    
	    cout<<a[mid]<<endl;
	    
	 }
	return 0;
}
