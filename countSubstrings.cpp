class Solution {
public:
    bool isPali(string s){
        int st = 0;
        int en = s.size()-1;
        while(st<en){
            if(s[st]!=s[en]) return false;
            st++;
            en--;
        }
        return true;
    }
    int countSubstrings(string s) {
        // vector<string> vc;
        int n = s.size();
        int co=0;
        for(int i=0;i<n;i++){
            string ans = "";
            for(int j=i;j<n;j++){
                ans+=s[j];
                if(isPali(ans)) co++;
            }
        }
        return co;
    }
};
