class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char,string>mp;
        map<string,char>mp1;
        int c=0,j=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            c++;
        }
        c++;

        if(c!=p.size())
        return false;
        for(int i=0;i<p.size();i++)
        {
            string q;
            //int j=0;
            while(s[j]!=' ' && j<s.size())
            {
                q.push_back(s[j]);
                j++;
            }
            j++;
            //cout<<"q"<<"  "<<q<<endl;

            if(mp.find(p[i])!=mp.end())
            {
                if(mp[p[i]]!=q)
                return false;
            }
            else
            {
                mp.insert({p[i],q});
                //mp.insert(pair<char, string>(p[i],q));
                //mp[p[i]]=q;
            }

            if(mp1.find(q)!=mp1.end())
            {
                if(mp1[q]!=p[i])
                return false;
            }
            else
            {
                mp1.insert({q,p[i]});
                //mp.insert(pair<char, string>(p[i],q));
                //mp[p[i]]=q;
            }
        }

        
        return true;
    }
};
