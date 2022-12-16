class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        set<string>s;
        string row,col,box;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(b[i][j]!='.')
                {
                    row="row"+to_string(i)+b[i][j];
                    col="col"+to_string(j)+b[i][j];
                    box="box"+to_string(i/3*3+(j/3))+b[i][j];
                    if(s.find(row)!=s.end() || s.find(col)!=s.end() || s.find(box)!=s.end())
                    return false;
                    s.insert(row);
                    s.insert(col);
                    s.insert(box);
                }
            }
        }
        return true;
    }
};
