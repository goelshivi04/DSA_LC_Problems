#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here.
	int t;
	cin>>t;
	while(t--)
	{
	    int cost=0;
	    string s;
	    cin>>s;
	    map<char,int>mp;
	    for(int i=0;i<s.size();i++)
	    mp[s[i]]++;
	    
	    for(auto it:mp)
	    {
	        if(it.second%2==0)
	        {
	            cost+=(it.second/2);
	        }
	        else
	        {
	            cost+=(it.second/2)+1;
	        }
	    }
	    cout<<cost<<endl;
	}
	return 0;
}
