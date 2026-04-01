class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans ;
        string minans;
        int co=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') co++;
            if(co==k) return s.substr(0,i);
        }
        return s;
    }
};
