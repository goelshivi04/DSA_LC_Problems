class Solution {
public:
    void reverseString(vector<char>& s) {
        int i,j,n=s.size();
        for(i=0,j=n-1;i<j;i++,j--)
        {
            swap(s[i],s[j]);
        }
    }
};
