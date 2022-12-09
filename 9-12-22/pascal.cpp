class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        int i,j;
        for(i=0;i<n;i++)
        {
            vector<int>t;
            t.push_back(1);
            for(j=1;j<i;j++)
            {
                int x=ans[i-1][j-1]+ans[i-1][j];
                t.push_back(x);                   

            }
            if(i>=1)
            t.push_back(1);
            ans.push_back(t);
        }
        return ans;
    }
};
