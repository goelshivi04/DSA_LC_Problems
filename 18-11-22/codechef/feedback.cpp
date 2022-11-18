#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l1=s.find("010");
	    int l2=s.find("101");
	    if(l1>=0 || l2>=0)
	    cout<<"Good"<<endl;
	    else
	    cout<<"Bad"<<endl;
	}
	return 0;
}
