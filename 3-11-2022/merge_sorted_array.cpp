class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        
        int i=m-1,j=n-1,k=m+n-1;
        if(!m)
            n1=n2;
        while(j>=0 && i>=0)
        {
            if(n1[i]>n2[j])
            {
                n1[k]=n1[i];
                k--;i--;
            }
            else
            {
                n1[k]=n2[j];
                k--;j--;
            }
        }
         while(j>=0)
            n1[k--]=n2[j--]; 
        
    }
};
