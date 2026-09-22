class Solution {
public:
    int maxSum(vector<vector<int>>& nums) {
        int n = nums.size(), m = nums[0].size();
        int maxi=0;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                int sum = nums[i][j] + nums[i][j+1] + nums[i][j+2] + nums[i+1][j+1]+ nums[i+2][j] + nums[i+2][j+1]+nums[i+2][j+2];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
