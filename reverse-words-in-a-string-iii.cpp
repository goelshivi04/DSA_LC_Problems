class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<int>s1;
        for(char c:s)
        {
            if(c!=' ')
            s1.push(c);
            else
            {
                while(!s1.empty())
                {
                    ans.push_back(s1.top());
                    s1.pop();
                }
                ans.push_back(c);
            }
        }
        while(!s1.empty())
        {
            ans.push_back(s1.top());
            s1.pop();
        }
        return ans;
    }
};
