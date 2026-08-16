class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>vc;
        for(int i=0;i<nums.size();i++){
            bool flag = true;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<=nums[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                vc.push_back(nums[i]);
                continue;
            }
            bool flags=true;
            for(int j=i-1;j>=0;j--){
                if(nums[i]<=nums[j]){
                    flags = false;
                    break;
                }
            }
            if(flags){
                vc.push_back(nums[i]);
            }
        }
        return vc;
    }
};
