class Solution {
public:
    bool isValid(string s) {
        int len=s.size();
        stack<char>st;
        st.push('$');
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(' || s[i]=='{'  ||  s[i]=='[')
                st.push(s[i]);
            else
            {
                char c=st.top();
                if(s[i]==')' && c=='(' || s[i]=='}' && c=='{' ||  s[i]==']' && c=='[')
                    st.pop();
                else
                    return false;
            }
            
        }
       return (st.top()=='$');
    }
};
