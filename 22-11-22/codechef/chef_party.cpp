#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(count>=a[i])
	        count++;
	        else
	        break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
