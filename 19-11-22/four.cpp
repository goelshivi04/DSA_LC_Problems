class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num>0)
        {
            int digi=num%10;
            v.push_back(digi);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int num1=v[0]*10+v[2];
        int num2=v[1]*10+v[3];
        return num1+num2;

    }
};
