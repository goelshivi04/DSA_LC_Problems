#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   } 
	    for(int i=0;i<n;i++)
	   {
	       cin>>b[i];
	   }
	   int x=a[0]*b[0];
	   int ans;
	   int rating;
	    for(int i=0;i<n;i++)
	   {
	       int y=a[i]*b[i];
	       if(x<y)
	       {
	           x=y;
	           ans=i+1;
	           rating=b[i];
	       }
	       else if(x==y)
	       {
	           if(b[i]>rating)
	           {
	               rating=b[i];
	               ans=i+1;
	           }
	       }
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
