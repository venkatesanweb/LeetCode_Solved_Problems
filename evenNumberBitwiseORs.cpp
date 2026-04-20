class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ors=0;
        for(int val : nums){
            if(val%2==0) ors |=val;
        }
        return ors;
    }
};
