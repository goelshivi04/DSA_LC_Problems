#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int c=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='1' && (s[i+1]=='0' || s[i+1]=='\0'))
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
