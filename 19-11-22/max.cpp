class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max1=0;
        for(int i=0;i<sentences.size();i++)
        {
            int c=1;
            int n=sentences[i].size();
            for(int j=0;j<n;j++)
            {
                if(sentences[i][j]==' ')
                c++;
            }
            max1=max(max1,c);
        }
        return max1;
    }
};
