class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ele = *max_element(nums.begin(),nums.end());
        int sum=0;
        while(k--){
            sum+=ele;
            ele++;
        }
        return sum;
    }
};
