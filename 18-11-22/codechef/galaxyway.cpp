#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,g,c=0;
	    cin>>n>>m>>g;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<n;i++)
	    {
	        if((a[i]%g==0) && (a[i]<=m))
	        c++;
	    }
	    
	    cout<<c<<endl;
	}
	return 0;
}
