class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        for(int i=n;i>=0;i--){
            if((num[i]-'0')%2!=0){
                string s=num.substr(0,i+1);
                return s;
            }
        }
        return "";
    }
};
