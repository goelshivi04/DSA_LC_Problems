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
	    map<string,int>mp;
	    vector<string>first(n);
	    vector<string>last(n);
	    for(int i=0;i<n;i++)
	     {
	         cin>>first[i]>>last[i];
	         mp[first[i]]++;
	     }
	     
	     for(int i=0;i<n;i++)
	     {
	         if(mp[first[i]]==1)
	         cout<<first[i]<<endl;
	         else
	         cout<<first[i]<<" "<<last[i]<<endl;
	     }
	}
	return 0;
}
