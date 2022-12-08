class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,int>mp;
        int c=0;
        
        for(int it:nums)
        mp[it]++;

        for(auto it:nums)
        {
            c+=mp[it-diff]*mp[it-diff*2];
        }
        return c;
    }
};
