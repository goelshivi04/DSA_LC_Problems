class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(auto it : nums){
            st.insert(it);
        }
        vector<int> temp;
        for(auto it : st){
            temp.push_back(it);
        }
        if(st.size() >= 3){
            return temp[temp.size()-3];
        }
        else{
            return temp[temp.size()-1];
        }
    }
};
