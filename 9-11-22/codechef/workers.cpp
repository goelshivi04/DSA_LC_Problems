#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	cin>>b[i];
	
	int min_both=32765,min_a=32765,min_t=32765;
	for(int i=0;i<n;i++)
	{
	    if(b[i]==3)
	    {
	        min_both=min(min_both,a[i]);
	    }
	    if(b[i]==2)
	    {
	        min_a=min(min_a,a[i]);
	    }
	    if(b[i]==1)
	    {
	        min_t=min(min_t,a[i]);
	    }
	    
	}
	
//	cout<<min_both<<" "<<min_a<<"  "<<min_t<<endl;
	if((min_t+min_a)<=min_both)
	cout<<min_t+min_a<<endl;
	else
	cout<<min_both<<endl;
	
	
	
	
	return 0;
}
