class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans(nums.size());
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            ans[i]=nums[i+1];
            ans[i+1]=nums[i];
        }
        return ans;
    }
};
