class Solution {
public:

    bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
        else
        return false;
}
    bool halvesAreAlike(string s) {
        int n=s.size(),n1=0,n2=0;
        string a = s.substr(0,n/2), b=s.substr(n/2,n/2);
        for(auto i:a)
        {
            if(isVowel(i))
            n1++;
        }
        for(auto i:b)
        {
            if(isVowel(i))
            n2++;
        }
        if(n1==n2)
        return true;
        else
        return false;
    }
};
