class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size(),ans=0;
        vector<int> vc(n+1,0);
        for(int i=0;i<n;i++){
            ans+=nums[i];
            vc[i+1] = ans;
        }
        for(int i=0;i<n;i++){
            if(vc[i]==vc[n]-vc[i+1]) return i;
        }
        return -1;
    }
};
