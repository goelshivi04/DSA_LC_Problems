#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=0;
	    cin>>n;
	    int a[2*n];
	    map<int,int>mp;
	    for(int i=0;i<2*n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<2*n;i++)
	    {
	        mp[a[i]]++;
	    }
	    for(auto it:mp)
	    {
	        if(it.second>=3)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	}
	return 0;
}
