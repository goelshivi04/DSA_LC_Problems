class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i,j,n1=nums.size();
        vector<int>ans;
        for(i=0,j=n;i<n&&j<n1;i++,j++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
