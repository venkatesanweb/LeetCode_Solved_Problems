class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long mini = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                long long gcd = __gcd(nums[i],nums[j]);
                mini =max(mini,((1LL*nums[i]*nums[j])/(1LL*(gcd*gcd))));
            }
        }
        return mini;
    }
};
