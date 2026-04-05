class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mp;
        for(int val : nums){
             mp[val]++;
        }
        for(auto it : mp){
            if(it.second>2) return false;
        }
        return true;
    }
};
