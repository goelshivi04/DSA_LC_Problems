class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        mp[words[i]]++;
        
        priority_queue<int>q;

        for(auto it:mp)
        {
            q.push(it.second);
        }

        while(k--)
        {
            int x=q.top();
            q.pop();
            for(auto it:mp)
            {
                if(it.second==x)
                {
                    ans.push_back(it.first);
                    auto it1=mp.find(it.first);
                    mp.erase(it1);   
                    break;          
                    
                }                
            }
        }
        return ans;
    }
};
