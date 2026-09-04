class Solution {
public:
    bool checkString(string s) {
        int co=0;
        for(int i=0;i<s.size();i++){
            // if(co>1) return false;
            if(s[i]=='b' && co==0) co++;
            if(s[i]=='a' && co>=1) return false; 
        }
        return true;
    }
};
