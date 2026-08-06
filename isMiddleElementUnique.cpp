class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int len = nums.size()/2;
        int co=0;
        for(int i=0;i<nums.size();i++){
            if(nums[len]==nums[i]) co++;
            if(co>1) return false;
        }
        return co<=1;
    }
};
