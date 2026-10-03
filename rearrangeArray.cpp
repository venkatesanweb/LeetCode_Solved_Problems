class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mp;
        int maxi=0;
        for(int val : nums){
            mp[val]++;
            maxi=max(maxi,mp[val]);
        }
        vector<int> vc;
        for(int i=0;i<maxi;i++){
            for(auto it : mp){
                if(it.second>0){
                    vc.push_back(it.first);
                    mp[it.first]--;
                }
            }
        }
        return vc;
    }
};
