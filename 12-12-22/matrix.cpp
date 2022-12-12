class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0,j=0,temp=0,k=0;
        int n=matrix.size();
        for(i=0;i<matrix.size();i++){
            for(j=i+1;j<matrix[i].size();j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

        for(i=0;i<matrix.size();i++){
            for(j=0,k=n-1;j<k;j++,k--){
                swap(matrix[i][j],matrix[i][k]);
            }
        }
    }
};
