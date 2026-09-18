class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vc;
        for(int i=1;i<nums.size();i+=2){
            int freq = nums[i-1];
            int val = nums[i];
            while(freq--){
                vc.push_back(val);
            }
        }
        return vc;
    }
};
