class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int len=s.size();
        for(char c:s)
        mp[c]++;
        int c1=0;
        for(auto it:mp)
        {
            if(it.second%2!=0)
            c1++;
        }
        if(c1)
        return (len-c1+1);
        else
        return len;
    }
};
