class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            char ch = tolower(s[i]);
            s[i]=ch;
        }
        return s;
    }
};
