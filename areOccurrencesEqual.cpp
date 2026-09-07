class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int val = mp[s[0]];
        for(auto it : mp){
            if(val!=it.second){
                return false;
            }
        }
        return true;
    }
};
