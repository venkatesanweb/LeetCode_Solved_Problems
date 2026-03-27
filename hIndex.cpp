class Solution {
public:
    int hIndex(vector<int>& nums) {
        int co=0;
        int i=nums.size();
        sort(nums.begin(),nums.end());
        for(int val : nums){
            if(i--<=val) co++;
        }
        return co;
    }
};
