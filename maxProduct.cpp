class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,sef=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(pre==0) pre=1;
            if(sef==0) sef=1;
            pre *=nums[i];
            sef*=nums[nums.size()-i-1];
            ans=max(ans,max(sef,pre));
        }
        return ans;
    }
};
