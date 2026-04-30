class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans =-1;
        map<int,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        for(int val : nums){
            int neg = val-(val*2);
            if(mp[neg]>=1){
                ans=max(ans,val);
            }
        }
        return ans;
    }
};
