class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<k;i++){
            sum = sum + (nums[nums.size()-i-1]-nums[i]);
        }
        return sum;
    }
};
