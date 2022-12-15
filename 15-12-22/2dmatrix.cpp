class Solution {
public:
    
    int bin(vector<int>a,int n1,int x)
    {
        
        int m1=0,l=0,h=n1-1;
        while(l<=h)
        {
            m1=(l+h)/2;
            if(a[m1]==x)
            return m1;
            else if(a[m1]>x)
            h=m1-1;
            else
            l=m1+1;
        }
        return -1;
    }

    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            if(t>=mat[i][0] && t<=mat[i][m-1])
            {
                if(bin(mat[i],m,t)!=-1)
                return true;
                else
                return false;
            }
        }
        return false;

    }
};
