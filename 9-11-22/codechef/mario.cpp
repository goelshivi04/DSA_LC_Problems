#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=1;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0,j=n/2;i<n/2 && j<n;i++,j++)
	    {
	        if(s[i]!=s[j])
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(flag==0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
