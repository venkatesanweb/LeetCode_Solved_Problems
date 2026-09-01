class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int co=0;
        for(string s : words){
            if(s.find(pref)!=-1)
            {
                bool flg=true;
                for(int i=0;i<pref.size();i++){
                    if(pref[i]!=s[i]){
                        flg=false;
                        break;
                    }
                }
                if(flg) co++;
            }
        }
        return co;
    }
};
