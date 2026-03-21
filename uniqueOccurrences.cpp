class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int> mp;
        for(int val:arr){
            mp[val]++;
        }
        for(auto it : mp){
            for(auto its : mp){
                if(it.first!=its.first && it.second==its.second){
                    return false;
                }
            }
        }
        return true;
    }
};
