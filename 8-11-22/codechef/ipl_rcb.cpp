#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y||x==1||x==y)
        {
            cout<<"0"<<endl;
        }
        else if(x>y){
            if(x%y==0)
            {
                cout<<y<<endl;
            }
            else{
            cout<<x-y<<endl;
            }
        }
    }
}
