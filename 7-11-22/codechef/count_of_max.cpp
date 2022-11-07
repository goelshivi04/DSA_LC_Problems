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
	    map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    int p=0,max1=0;
	    for(auto it:mp)
	    {
	        if(it.second>max1)
	        {
	            max1=it.second;
	            p=it.first;
	        }
	    }
	    cout<<p<<" "<<max1<<endl;
	    
	}
	return 0;
}
