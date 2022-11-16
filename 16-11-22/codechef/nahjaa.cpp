#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    if(n==1)
	    {
	        if(a[0]==k)
	        cout<<"Yes"<<endl;
	        else
	        cout<<"No"<<endl;
	        continue;
	    }
	    int flag=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]==k)
	        {
	            flag=1;
	            break;
	        }
	    }
	        if(flag==1)
	        cout<<"Yes"<<endl;
	        else
	        cout<<"No"<<endl;
	    
	    
	 }
	return 0;
}
