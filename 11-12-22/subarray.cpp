class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,max1=INT_MIN;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
            max1=max(s,max1);
            if(s<0)
            s=0;
        }
        return max1;
    }
};
