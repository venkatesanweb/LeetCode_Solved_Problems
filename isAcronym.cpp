class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int i=0;
        for(string temp:words){
            if(s[i]!=temp[0] || i>=s.size()) return false;
            i++;
        }
        return i==s.size();
    }
};
