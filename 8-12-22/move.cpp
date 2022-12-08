class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int s=0,i,j;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(i=0,j=0;i<seats.size()&&j<students.size();i++,j++)
        {
            s+=abs(seats[i]-students[j]);
        }
        return s;
    }
};
