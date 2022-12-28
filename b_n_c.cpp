class Solution {
public:
    string getHint(string s, string g) {
        int x=0,y=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==g[i])
            {
                s[i]='A';
                g[i]='Z';
                x++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            size_t index=g.find(s[i]);
            if(index!= string::npos)
            {
                y++;
                g[index]='Q';
            }
        }
        return to_string(x) + 'A' + to_string(y) + 'B';
    }
};
