class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0,en=s.size()-1;
        while(st<en){
            if(!isalpha(s[st])){
                st++;
            }
            else if(!isalpha(s[en])){
                en--;
            }
            else{
                swap(s[st],s[en]);
                st++;
                en--;
            }
            
        }
        return s;
    }
};
