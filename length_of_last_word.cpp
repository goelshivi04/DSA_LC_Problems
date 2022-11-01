class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int n=s.size();
        if(n>1){
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                c++;
                if((i-1)<0)
                    break;
                if(s[i-1]==' ')
                    break;
            }
        }
        }
        else
            c=1;
        return c;
    }
};
