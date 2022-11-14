#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long b,c;
        cin>>b>>c;
    cout<<(lcm(b,c)/b)<<endl;
    }
	return 0;
}
