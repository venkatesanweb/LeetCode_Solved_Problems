class Solution {
public:
    int countAsterisks(string s) {
        int line=0;
        int ans=0;
        for(char ch : s){
            if(ch=='|') line++;
            if(ch=='*' && line%2==0) ans++;
        }
        return ans;
    }
};
