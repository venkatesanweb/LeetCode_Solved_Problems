class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int roes=0;
        for(int i=0;i<nums.size();i++){
            roes|=nums[i];
        }
        return roes;
    }
};
