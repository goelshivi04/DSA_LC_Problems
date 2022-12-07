class Solution {
public:
    string reversePrefix(string word, char ch) {
        int flag=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                flag=i;
                break;
            }
        }
        //cout<<flag<<endl;
        for(int i=0,j=flag;i<j;i++,j--)
        {
            char temp=word[i];
            word[i]=word[j];
            word[j]=temp;
        }
        return word;
    }
};
