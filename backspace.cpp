class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int ns=s.size();
        int nt=t.size();

        stack<char>ss;
        stack<char>st;

        for(int i=0;i<ns;i++)
        {
            if(s[i]!='#')
            ss.push(s[i]);
            else
            if(!ss.empty())
            ss.pop();
        }

        for(int i=0;i<nt;i++)
        {
            if(t[i]!='#')
            st.push(t[i]);
            else
            if(!st.empty())
            st.pop();
        }

        if(ss==st)     
        return true;
        else
        return false;        
    }
};
