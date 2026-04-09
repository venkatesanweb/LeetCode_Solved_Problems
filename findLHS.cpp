class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        for(int val:nums) mp[val]++;
        int maxi=0;
        for(int i : nums){
            if(mp[i+1] || mp[i-1]){
                maxi = max({maxi,mp[i]+mp[i-1],mp[i]+mp[i+1]});
            }
        }
        return maxi;
    }
};
