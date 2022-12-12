class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size(),c=0,s=0,flag=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.first==target){
                c=it.second;
                flag=1;
                break;                
            }
            else{
                s=s+it.second;
            }
        }
        if(flag==1){
            ans.push_back(s);
            ans.push_back(s+c-1);
        }
        else{
        ans.push_back(-1);
        ans.push_back(-1);
        }
        return ans;

    }
};
