class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string s2="";
        // int n1=s.size();
        // int n2=t.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(s1.size()!=0){
                    s1.pop_back();
                }
            }
            else{
                s1+=s[i];
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(s2.size()!=0){
                    s2.pop_back();
                }
            }
            else{
                s2+=t[i];
            }
        }
        return s1==s2;
    }
};
