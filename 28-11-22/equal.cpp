#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,s=0,s1=0,s2=0;
	    cin>>n;
	    long long a[n],b[n];	
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s1+=a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        s2+=b[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<b[i])
	        {
	            s+=(b[i]-a[i]);
	        }
	    }
	    if(s1==s2)
	    cout<<s<<endl;
	    else
	    cout<<-1<<endl;
	    
	}
	return 0;
}
