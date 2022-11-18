#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int q;
	cin>>q;
	while(q--)
	{
	    int p,i,a1,x,c=0;
	    cin>>p;
	    if(p==1)
	    {
	        cin>>i>>a1;
	        a[i-1]=a1;
	    }
	    if(p==2)
	    {
	        cin>>x;
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]%m==x)
	            c++;
	        }
	        cout<<c<<endl;
	    }
	}
	return 0;
}
