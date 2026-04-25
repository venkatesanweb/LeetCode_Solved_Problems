class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int co=0;
        for(int val : nums){
            if(val<k) co++;
        }
        return co;
        
    }
};
