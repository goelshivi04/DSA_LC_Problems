#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0,flag=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int min1=INT_MAX;
	    for(int i=0;i<n;i++)
	      min1=min(min1,a[i]);
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=min1){
	        if(a[i]%min1==0)
	        c++;
	        else{flag=1;
	        break;}}
	    }
	      if(flag==0)
	    cout<<c<<endl;
	    else
	    cout<<n<<endl;
	      
	}
	return 0;
}
