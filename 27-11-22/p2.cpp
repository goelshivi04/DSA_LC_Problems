#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, a[40]={},b,j=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        j=0;
	        cin>>b;
	        while(b)
	        {
	            if(a[j]==0)
	              a[j]=b%2;
	            b/=2;
	            j++;
	        }
	    }
	    int res=0;
	    for(int i=0;i<40;i++)
	     res+=a[i];
	    
	    cout<<res<<endl;
	}
	return 0;
}
