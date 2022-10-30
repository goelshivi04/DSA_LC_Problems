class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        int n=strs.size();
        sort(strs.begin(),strs.end());
        
        string f=strs[0];
        string l=strs[n-1];
        
        for(int i=0;i<f.size();i++)
        {
            if(f[i]!=l[i])
                break;
            else
                result=result + f[i];
        }
        
        return result;
    }
};
