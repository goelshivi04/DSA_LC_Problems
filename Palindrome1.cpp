//Given an integer x, return true if x is palindrome integer.

//An integer is a palindrome when it reads the same backward as forward.

//For example, 121 is a palindrome while 123 is not.

class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int digi,rev=0,n=x;
        while(n>0)
        {
            digi=n%10;
            rev=rev*10+digi;
            n=n/10;
        }
        if(rev==x)
            return true;
        else
            return false;
        
    }
};
