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
	    int t1,d1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>t1>>d1;
	        if(k>=t1)
	        k=k-t1;
	        else
	        {
	            sum+=(t1-k)*d1;
	            k=0;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
