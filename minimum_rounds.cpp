class Solution {
public:
    int minimumRounds(vector<int>& t) {
        map<int,int>mp;
        int c=0;
        for(int i=0;i<t.size();i++)
        mp[t[i]]++;

        for(auto it:mp)
        {
            if(it.second==1)
            {
                return -1;
            }
            if(it.second%3==0)
            {
                c+=it.second/3;
            }
            else
            c+=it.second/3+1;
            
        }
        return c;
    }
};
