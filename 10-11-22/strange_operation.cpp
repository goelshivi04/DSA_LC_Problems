#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    
	    for(int i=1;i<k;i++)
	    sum=sum+sum+1;
	    
	    if(sum%2!=0)
	    cout<<"even"<<endl;
	    else
	    cout<<"odd"<<endl;
	    
	    
	    
	}
	return 0;
}
