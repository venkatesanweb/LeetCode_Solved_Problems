class Solution {
public:
    int lengthOfLastWord(string s) {
        bool res=true;
        string ans="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && res){
                continue;
            }
            else if(s[i]==' ' && !res){
                break;
            }
            else{
                ans+=s[i];
                res=false;
            }
        }
        return ans.length();
    }
};
