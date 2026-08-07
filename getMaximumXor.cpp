class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int xors = 0;
        int bits = pow(2,maximumBit)-1;
        for(int val : nums) xors^=val;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i] = xors^bits;
            xors^=nums[nums.size()-i-1];
        }
        return ans;
    }
};
