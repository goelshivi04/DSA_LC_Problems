#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    string str; cin>>str;
	    for(int i=0;i<str.length()-4;i++)
	    {
	        if(str[i]=='p' && str[i+1]=='a' && str[i+2]=='r' && str[i+3]=='t' && str[i+4]=='y')
	        {
	            str[i+2]='w';
	            str[i+3]='r';
	            str[i+4]='i';
	        }
	    }
	    cout<<str<<"\n";
	}
	return 0;
}
