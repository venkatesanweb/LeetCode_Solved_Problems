class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1) return 0;
        bool trk[26]={false};
        for(int i=0;i<s.size()-1;i++){
            bool flg=true;
            char ch = tolower(s[i]);
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]  || trk[ch-'a']){
                    trk[ch-'a']=true;
                    flg=false;
                    break;
                }
            }
            if(flg) {
                cout<<trk[ch-'a'];
                return i;
            }
        }
        char ch = tolower(s[s.size()-1]);
        if(!trk[ch-'a']) return s.size()-1;
        return -1;
    }
};
