class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int co=0;
            if(nums[i]%2==0){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]%2==1) co++;
                }
            }
            else {
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]%2==0) co++;
                }
            }
            ans.push_back(co);
        }
        return ans;
    }
};
