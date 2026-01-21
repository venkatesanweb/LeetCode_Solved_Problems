class Solution {
public:
    string interpret(string str) {
        string s="";
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                if(str[i+1]==')'){
                    s+='o';
                } 
            }
            else if(str[i]!=')'){
                if(str[i]!='(' || str[i]!=')') s+=str[i];
            }
        }
        return s;
    }
};
