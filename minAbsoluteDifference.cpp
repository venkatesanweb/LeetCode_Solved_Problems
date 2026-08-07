class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int maxi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==1 && nums[j]==2){
                    maxi = min(maxi,abs(i-j));
                }
            }
        }
        return maxi==INT_MAX?-1:maxi;
    }
};
