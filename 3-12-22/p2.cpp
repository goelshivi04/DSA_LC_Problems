#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int mini=n,maxi=0,k=1;
    for(int i=0;i<n-1;i++)
    {
        if((x[i+1]-x[i])<=2)
        {
            k++;
        }
        else
        {
            mini=min(mini,k);
            maxi=max(maxi,k);
            k=1;
        }
    }
     mini=min(mini,k);
     maxi=max(maxi,k);
    cout<<mini<<" "<<maxi<<endl;
}

	return 0;
}
