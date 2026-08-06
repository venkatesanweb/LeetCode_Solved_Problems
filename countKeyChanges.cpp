class Solution {
public:
    int countKeyChanges(string s) {
        int co=0;
        for(int i=1;i<s.size();i++){
            char curr = tolower(s[i]);
            char pre =tolower(s[i-1]);
            if(pre!=curr) co++;
        }
        return co;
    }
};
