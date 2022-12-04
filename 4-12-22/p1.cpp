#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,even=0,odd=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2==0)
	        even++;
	        else
	        odd++;
	    }
	    
	    if(odd>=1)
	    cout<<even<<endl;
	    else
	    cout<<0<<endl;
	    
	    
	    
	}
	return 0;
}
