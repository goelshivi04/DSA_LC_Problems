#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    
	    for(int i=0;i<n-1;i++){
	        int c=0;
	        for(int j=i+1;j<n;j++){
	            
	        
	        if(a[i]<a[j]){
	            c++;
	        }
	        
	        
	    }
	    cout<<c<<" ";
	    	
	}
	cout<<"0"<<endl;	
	
	}
	return 0;
}
