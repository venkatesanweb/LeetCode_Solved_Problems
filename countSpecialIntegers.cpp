class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,int> mp;
        int co=0;
        for(int val : nums){
            mp[val]++;
        }
        for(auto it : mp){
            int occ = it.second;
            int val = it.first;
            if(occ==3){
                int curr=-1;
                // int nex=0;
                int ans=-1;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==val && curr==-1){
                        curr=i;
                    }
                    else if(nums[i]==val && ans==-1){
                        ans = i - curr;
                        curr=i;
                    }
                    else if(nums[i]==val && ans>-1){
                        int off = i-curr;
                        if(ans==off) co++;
                        break;
                    }
                }
            }
        }
        return co;
    }
};
