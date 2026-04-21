class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        int mins=min(s1.size(),s2.size());
        int co=0;
        for(int i=0;i<mins;i++){
            if(s1[i]!=s2[i]) break;
            co+=1;
        }
        return s1.substr(0,co);
    }
};
