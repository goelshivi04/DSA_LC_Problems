class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        for(i=0;i<t.size() && j<s.size();i++)
        {
            if(s[j]==t[i])
            j++;
        }
        if(j==s.size())
        return true;
        else
        return false;
    }
};
