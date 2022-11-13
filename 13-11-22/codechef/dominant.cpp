#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while (t--){
    int n;
    cin>>n;
     map<int,int>mp;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<int>v;
    for(auto i:mp){
        v.push_back(i.second);
    }
    if(v.size()==1){
        cout<<"YES"<<endl;
    }
    else{
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]>v[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
}
}
}

	return 0;
}
