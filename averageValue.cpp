class Solution {
public:
    int averageValue(vector<int>& nums) {
        int co=0;
        double sum=0;
        for(int val : nums){
            if(val%3==0 && val%2==0) {
                sum+=val;
                co++;
            }
        }
    
        return sum==0 ? 0 : sum/co;
    }
};
