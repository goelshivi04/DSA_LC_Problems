class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j && nums[j]<nums[i])
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};
