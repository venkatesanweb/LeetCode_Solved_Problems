class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int val : nums) mp[val]++;
        for(int val : nums){
            if(mp[val]%2!=0) return false;
        }
        return true;
    }
};
