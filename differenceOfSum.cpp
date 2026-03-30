class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int valsum=0;
        int digsum=0;
        for(int val : nums){
            valsum+=val;
            while(val>0){
                digsum+=val%10;
                val/=10;
            }
        }
        return abs(valsum-digsum);
        
    }
};
