class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        map<char,int>m1;
        map<char,int>m2;

        if(n1>n2)
        return false;

        for(int i=0;i<n1;i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        
        if(m1==m2)
        return true;
        
        int l=0;
        for(int r=n1;r<n2;r++)
        {
            m2[s2[r]]++;
            m2[s2[l]]--;
            if(m2[s2[l]]==0)
            m2.erase(s2[l]);
            l++;
            if(m1==m2)
            return true;
        }
        return false;        
    }
};
