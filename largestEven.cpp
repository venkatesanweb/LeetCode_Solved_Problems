class Solution {
public:
    string largestEven(string s) {
        if(s[s.size()-1]%2==0) return s;
        int i=0;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]%2==0) break;
        }
        // if(i==0) return "";
        return s.substr(0,i+1);
    }
};
