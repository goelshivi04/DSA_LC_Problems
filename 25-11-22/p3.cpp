#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,one=0,zero=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        one++;
	        else
	        zero++;
	    }
	    if(one%2!=0 && zero%2!=0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
