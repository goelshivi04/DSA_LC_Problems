class Solution {
public:

    void f(vector<vector<int>>& image, int sr, int sc, int color,int s,int r,int c)
    {
        if(sr<0 || sc<0 || sr>=r ||sc>=c)
        return;
        else if(image[sr][sc]!=s)
        return;

        image[sr][sc]=color;

        f(image,sr-1,sc,color,s,r,c);
        f(image,sr,sc-1,color,s,r,c);
        f(image,sr,sc+1,color,s,r,c);
        f(image,sr+1,sc,color,s,r,c);       

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        if(image[sr][sc]==color)
        return image;
        int r=image.size();
        int c=image[0].size();
        f(image,sr,sc,color,image[sr][sc],r,c);
        return image;
    }
};
