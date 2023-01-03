class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>s;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!="+" && t[i]!="/" && t[i]!="*" && t[i]!="-")
            {
                s.push(stoi(t[i]));
            }
            
            else if(t[i]=="+")
            {
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int res=n2+n1;
                s.push(res);
            }else if(t[i]=="-")
            {
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int res=n2-n1;
                s.push(res);
            }
            else if(t[i]=="*")
            {
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int res=n2*n1;
                s.push(res);
            }
            else if(t[i]=="/")
            {
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int res=n2/n1;
                s.push(res);
            }

        }
        return s.top();
    }
};
