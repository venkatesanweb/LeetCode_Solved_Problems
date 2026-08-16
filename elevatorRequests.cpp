class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int pre=0;
        int sec=0;
        for(int val: requests){
            if(pre!=val){
                sec +=abs(val-pre);
                pre=val;
            }
        }
        return sec;
    }
};
