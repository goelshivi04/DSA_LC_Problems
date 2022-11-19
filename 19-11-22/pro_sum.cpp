class Solution {
public:
    int subtractProductAndSum(int num) {
        int sum=0,pro=1;
        while(num>0)
        {
            int digi=num%10;
            sum+=digi;
            pro*=digi;
            num=num/10;
        }
        return pro-sum; 

    }
};
