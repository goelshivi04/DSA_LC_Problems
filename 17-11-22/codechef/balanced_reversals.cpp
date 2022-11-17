#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,o=0,z=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        o++;
	        else
	        z++;
	    }
	    for(int i=1;i<=z;i++)
	    cout<<"0";
	    for(int i=1;i<=o;i++)
	    cout<<"1";
	    cout<<endl;
	}
	return 0;
}
