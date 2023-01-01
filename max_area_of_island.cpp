class Solution {
public:

    int dfs(vector<vector<int>>& grid, int i,int j,int r,int c)
    {
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j]==0 || grid[i][j]==2)
        return 0;

        // if(s.find({i,j})!=s.end())
        // return 0;

        // s.insert({i,j});
        grid[i][j]=2;

        return 1+dfs(grid,i+1,j,r,c)+dfs(grid,i-1,j,r,c)+dfs(grid,i,j+1,r,c)+dfs(grid,i,j-1,r,c);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();

        //set<pair<int,int>>s;
        int area=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                area=max(area,dfs(grid,i,j,r,c));
            }
        }
        return area;

    }
};
