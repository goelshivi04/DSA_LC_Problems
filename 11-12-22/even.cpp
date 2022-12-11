class Solution {
public:

    int digi(int n)
    {
        int d=0,x=0;
        while(n>0){
            d=n%10;
            x++;
            n=n/10;
        }
        return x;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(digi(nums[i])%2==0)
            c++;
        }
        return c;
    }
};
