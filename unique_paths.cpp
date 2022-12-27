class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> old_row(n, 1); 
        
        for(int i=m-2;i>=0;i--)
        {
            vector<int> new_row(n, 1);
            for(int j=n-2;j>=0;j--)
            {
                new_row[j]=new_row[j+1]+old_row[j];
            }
            old_row=new_row;
        } 
        return old_row[0];
    }
};
