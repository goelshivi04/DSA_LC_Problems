#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    int sum=x*3;
	    if(sum%2==0)
	    cout<<"1 "<<sum/2-1<<" "<<sum/2<<endl;
	    else
	    cout<<"1 "<<sum/2-1<<" "<<sum-sum/2<<endl;
	}
	return 0;
}
