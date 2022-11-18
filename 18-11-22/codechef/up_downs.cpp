#include <bits/stdc++.h>
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
	    sort(a,a+n);
	    for(int i=1;i<n-1;i=i+2)
	    {
	        if(a[i]<=a[i+1])
	        swap(a[i],a[i+1]);
	    }
	    for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
