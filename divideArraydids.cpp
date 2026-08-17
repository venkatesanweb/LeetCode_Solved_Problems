class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans(nums.size()/3,vector<int>(3));
        int idx=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=3){
            // vector<int> vc(3);
            if(i+2<nums.size() && nums[i+2]-nums[i]<=k){
                ans[idx++] = {nums[i],nums[i+1],nums[i+2]};
            }
            else{
                return vector<vector<int>>();
            }
        }
        return ans;
    }
};
