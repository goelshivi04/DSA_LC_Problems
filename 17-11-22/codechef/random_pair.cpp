#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    float total=0,c=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    total=(n*(n-1))/2;
	   // cout<<total<<endl;
	    sort(a,a+n);
	    float max_sum=a[n-1]+a[n-2];
	    //cout<<max_sum<<endl;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if((a[i]+a[j])==max_sum)
	            {
	               // cout<<i<<"  "<<j<<endl;
	                c++;
	            }
	        }
	    }
	    //cout<<(float)c<<endl;
	    float ans=c/total;
	    cout<<fixed<<setprecision(9)<<ans<<endl;
	}
	return 0;
}
