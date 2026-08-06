class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int pre=0;
        int ans =0;
        for(int i=0;i<nums.size()-k;i++){
            pre =max(pre,nums[i]);
            ans=max(ans,pre+nums[i+k]);
        }
        return ans;
    }
};
