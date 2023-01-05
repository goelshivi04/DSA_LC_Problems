class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {        
        sort(points.begin(),points.end());
        int max1=points[0][1],c=1;
        for(int i=1;i<points.size();i++)
        {
            if(max1<points[i][0])
            {
                c++;
                max1=points[i][1];
            }
           max1 = min(points[i][1],max1);
        }
        return c; 
    }
};
