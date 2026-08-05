class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mp;
        for(int val : nums) mp[val]++;
        int match =0;
        int mnon =0;
        for(auto it : mp){
            int val = it.second;
            match +=(val/2);
            if(val%2!=0) mnon++;
        }
        vector<int> ans;
        ans.push_back(match);
        ans.push_back(mnon);
        return ans;
    }
};
