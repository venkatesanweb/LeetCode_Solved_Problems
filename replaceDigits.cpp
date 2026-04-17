class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                continue;
            }
            else{
                char ch=(s[i]-'0')+s[i-1];
                s[i]=ch;
            }
        }
        return s;
    }
};
