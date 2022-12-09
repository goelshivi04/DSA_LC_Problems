class Solution {
public:
    bool isPalindrome(string s) {
       string ans;
       int i,j;
       for(char c:s)
       {
           c=tolower(c);
           if((c>='a' && c<='z') || (c>='0' && c<='9'))
           ans.push_back(c);
       } 
       int n=ans.size();
       for(i=0,j=n-1;i<n&&j>=0;i++,j--)
       {
           if(ans[i]!=ans[j])
           {
               return false;
           }
       }
       return true;
    }
};
