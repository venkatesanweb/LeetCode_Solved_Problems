class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int co=0;
        int n=nums.size();
        map<int,int> mp;
        mp[0]=-1;
        int prefex=0;
        int ans =0;
        for(int i=0;i<n;i++){
            prefex+=(nums[i]==0 ? -1: 1);
            if(mp.find(prefex)!=mp.end()){
                ans=max(ans,i-mp[prefex]);
            }
            else mp[prefex]=i;
        }
        return ans;
    }
};
