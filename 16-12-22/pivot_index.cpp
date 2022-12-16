class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,lsum=0;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];

        for(int i=0;i<nums.size();i++)
        {
            lsum+=nums[i];
            if(sum==lsum)
            return i;
            sum=sum-nums[i];
        }
        return -1;
    }
};
