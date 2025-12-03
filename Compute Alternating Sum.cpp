class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int i=1;
        int sum=0;
        for(int val:nums){
            if(i==1){
                sum+=(val*1);
                i=-1;
            }
            else{
                sum+=(val*-1);
                i=1;
            }

        }
        return sum;
    }
};
