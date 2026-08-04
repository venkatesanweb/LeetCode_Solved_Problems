class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        if(nums.size()<=1) return nums;
        vector<int> vc;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0 && k>0;i--){
        
            if(vc.empty() || vc.back()!=nums[i]){
                vc.push_back(nums[i]);
                // vc.push_back(nums[i-1]);
                k--;
            }
            
        }
        return vc;
    }
};
