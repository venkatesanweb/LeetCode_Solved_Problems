class Solution {
public:
    string greatestLetter(string s) {
        vector<int> mp(128,0);
        for(char ch : s){
            mp[ch]++;
        }
        string ans="";
        // int pre
        for(int i=128-32;i>0;i--){
            if(mp[i]>=1 && mp[i+32]>=1){
                char ch = i ;
                return string(1,ch);
            }
        }
        return ans;
    }
};
