class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(char ch : s){
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') v++;
            else if(ch>='a' && ch<='z') c++;
        }
        if(c==0) return 0;
        int val = v/c;
        int ans = floor(val);
        return ans;
    }
};
