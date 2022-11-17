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
	    string s;
	    cin>>s;
	    map<char,int>mp;
	    for(int i=0;i<n;i++)
	    mp[s[i]]++;
	    
	    for(auto it:mp)
	    {
	        if(it.second%2!=0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
