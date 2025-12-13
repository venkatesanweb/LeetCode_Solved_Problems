class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int max=0;
       for(int val:nums){
        max=max^val;
       }
       return max;
    }
};
