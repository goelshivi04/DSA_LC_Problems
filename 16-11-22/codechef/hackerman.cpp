#include <iostream>
using namespace std;

bool prime(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c=a+b;
	    if(prime(c))
	    cout<<"Alice"<<endl;
	    else
	    cout<<"Bob"<<endl;
	}
	return 0;
}
