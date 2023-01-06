class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0;
        sort(costs.begin(),costs.end());
        if(costs[0]>coins)
        return 0;
        for(int i=0;i<costs.size();i++)
        {
            sum+=costs[i];
            if(sum==coins)
            return i+1;
            else
            {
                if(sum>coins)
                {
                    sum-=costs[i];
                    return i;
                }
            }
        }
        if(sum<coins)
        return costs.size();
        return 0;
    }
};
