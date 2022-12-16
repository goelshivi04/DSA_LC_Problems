class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int>mp;
        for(int i=0;i<m.size();i++)
        mp[m[i]]++;

        for(int i=0;i<r.size();i++)
        {
            if(mp.find(r[i])==mp.end())
                return false;
            mp[r[i]]--;
            if(mp[r[i]]==0)
            {
                auto it1 = mp.find(r[i]);
                mp.erase(it1);
            }
        }
        return true;
    }
};
