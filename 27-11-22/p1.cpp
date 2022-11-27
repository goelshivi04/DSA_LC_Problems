class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int c_min=INT_MAX,temp_p=0,per_p=0;
    for(int i=0;i<n;i++)
    {
        if(c_min>prices[i])
        c_min=prices[i];
        temp_p=prices[i]-c_min;
        if(temp_p > per_p)
         per_p=temp_p;
    }
    return per_p;
    }
};
