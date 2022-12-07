class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {

       vector<int>ans;
       ans.push_back(first);
       for(int num:encoded)
       {
           first^=num;
           ans.push_back(first);
       }
       return ans;
    }
};
