#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,flag=0;
	cin>>n1>>n2;
	string f[n1],s;
	for(int i=0;i<n1;i++)
	cin>>f[i];
	
	for(int i=0;i<n2;i++)
	{
	    flag=0;
	    cin>>s;
	    for(int j=0;j<n1;j++)
	    {
	        int l=s.find(f[j]);
	        if(l>=0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1 || s.size()>=47)
	    cout<<"Good"<<endl;
	    else
	    cout<<"Bad"<<endl;
	}
	
	
	return 0;
}
