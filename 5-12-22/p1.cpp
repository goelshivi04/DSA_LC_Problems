#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    string s;
	    cin>>s;
	    map<int,int>mp;
	    for(int i=0;i<n;i++)
	    mp[s[i]]++;
	    
	    int sum=mp['0']*a + mp['1']*b;
	    
	    cout<<sum<<endl;
	}
	return 0;
}
