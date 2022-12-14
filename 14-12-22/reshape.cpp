class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size(), m=mat[0].size();
        if(n*m != r*c)
        return mat;
        vector<vector<int>>ans(r,vector<int>(c,0));        
        int i1=0,j1=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=mat[i1][j1];
                j1++;
                if(j1==m)
                {
                    j1=0;i1++;
                }
            }
        }
       return ans; 
    }
};
