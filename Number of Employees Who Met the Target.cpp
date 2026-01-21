class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int co=0;
        for(int val:hours){
            if(val>=target) co++;
        }
        return co;
    }
};
