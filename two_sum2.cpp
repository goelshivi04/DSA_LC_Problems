class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size(),i=0,j;
        j=n-1;

        while(t!=(nums[i]+nums[j]))
        {
            if(nums[i]+nums[j]>t)
            j--;
            else
            i++;
        }
        vector<int>ans;
        ans.push_back(i+1);
        ans.push_back(j+1);
        return ans;
        
    }
};
