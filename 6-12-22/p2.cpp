#include <iostream>
using namespace std;

int prime(int a)
{
    int i,flag=0;
    for(i=a+1;;i++)
    {
        flag=0;
        for(int j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
         if(flag==0)
         {
             flag=i;
             break;
         }
         else
         continue;
    }
    return flag;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,ans;
	    cin>>a>>b;
	    a=a+b;
	    ans=prime(a);
	    cout<<ans-a<<endl;
	}
	return 0;
}
