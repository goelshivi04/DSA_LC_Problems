class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n];
        int t;
        for(int i=0;i<n;i++)
            a[i]=start+2*i;
        
        t=a[0];
        for(int i=1;i<n;i++)
        t=t^a[i];
        return t;
    }
};
