#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x=0,y=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(s[0]=='L')
	    x--;
	    else if(s[0]=='R')
	    x++;
	    else if(s[0]=='U')
	    y++;
	    else
	    y--;
	    //cout<<x<<" "<<y<<endl;
	    for(int i=1;i<n;i++)
	    {
	        if(s[i]=='L' && (s[i-1]!='L' && s[i-1]!='R'))
	        x--;
	        else if(s[i]=='R' &&  (s[i-1]!='L' && s[i-1]!='R'))
	        x++;
	        else if(s[i]=='U' &&  (s[i-1]!='U' && s[i-1]!='D'))
	        y++;
	        else if(s[i]=='D' &&  (s[i-1]!='U' && s[i-1]!='D'))
	        y--;
	       // cout<<x<<" "<<y<<endl;
	    }
	    cout<<x<<" "<<y<<endl;
	}
	
	return 0;
}
