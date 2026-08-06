class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=1;i<s.size();i++){
            int val = abs((s[i-1]-'0')-(s[i]-'0'));
            // cout<<s[i]-'0'<<" "<<val;
            if(val>=3) return false;
        }
        return true;

    }
};
