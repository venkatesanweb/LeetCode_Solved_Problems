class Solution {
public:
    int balancedStringSplit(string s) {
        int rco=0;
        int lco=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R') rco++;
            else lco++;
            if(rco==lco) ans++;
        }
        return ans;
    }
};
