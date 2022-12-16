class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        multimap<int,string,greater<int>>mp;
        vector<string>ans;
        for(int i=0;i<names.size();i++)
        {
            mp.insert(make_pair(heights[i],names[i]));
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
