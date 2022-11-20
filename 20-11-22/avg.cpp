#include <iostream>

using namespace std;


int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
	    cin>>n>>k>>v;
	    int a[100000],s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s += a[i];
	    }
	    float r = v*(n+k) - s;
	    float ans = r/k;
	    int ansi = r/k;
	    if(ansi==ans && ans>0){
	        cout<<ansi<<"\n";
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
