class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        map<char,int>ms;
        map<char,int>mp;
        int ns=s.size();
        int np=p.size();
        if(np>ns)
        return ans;

        for(int i=0;i<np;i++)
        {
            mp[p[i]]++;
            ms[s[i]]++;
        }
        if(ms==mp)
        ans.push_back(0);
        int l=0;
        for(int r=np;r<ns;r++)
        {
            ms[s[r]]++;
            ms[s[l]]--;
            
            if(ms[s[l]]==0)
            ms.erase(s[l]);
            l++;
            if(ms==mp)
            ans.push_back(l);
        }
        return ans;
    }
};
