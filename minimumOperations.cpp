class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int co=0;
        int n  = nums.size();
        int zeros=0;
        for(int val : nums){
                if(val!=0){
                    continue;
                }
                else{
                    zeros++;
                }
            }
        if(zeros==nums.size())
        {
            return co;
        }
        while(true){
            int mini =INT_MAX;
            for(int i=0;i<n;i++)
            {
            if(nums[i]!=0){
                mini=min(mini,nums[i]);
            }
            }
            for(int i=0;i<n;i++)
            {
                if(nums[i]!=0){
                    nums[i]-=mini;
                }
            }
            co++;
            int zero=0;
            for(int val : nums){
                if(val!=0){
                    continue;
                }
                else{
                    zero++;
                }
            }
            if(zero==nums.size()){
                return co;
            }
            

        }
        return 0;
    }
};
