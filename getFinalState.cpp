class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> ans(nums.size());
        while(k--){
            auto min = min_element(nums.begin(),nums.end());
            int ele=*min;
            int index=min-nums.begin();
            nums[index] = ele*multiplier;
        }
        return nums;
    }
};
