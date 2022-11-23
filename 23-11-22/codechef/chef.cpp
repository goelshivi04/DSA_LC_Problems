#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int flag=1;
	    cin>>s;
	    map<char,int>mp;
	    for(int i=0;i<s.size();i++)
	    mp[s[i]]++;
	    
	    for(auto it:mp)
	    {
	        if(it.second==1)
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
