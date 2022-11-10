#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int i,j,n=s.size();
	    if(n%2==0)
	    j=n/2;
	    else
	    j=(n+1)/2;
	    
	    map<char,int>mp1,mp2;
	    for(i=0;i<n/2 && j<n;i++,j++)
	    {
	        mp1[s[i]]++;
	        mp2[s[j]]++;
	    }
	    
	    if(mp1==mp2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
