#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max1=0;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        max1=max(max1,a[i]);
	    }
	    cout<<max1<<endl;
	    
	}
	return 0;
}
