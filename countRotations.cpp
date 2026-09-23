class Solution {
public:
    int countRotations(string s, int k) {
        int to=0;
        int n = s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) to++;
        }
        if(s[n-1]==s[0]) to++;
        if(k==to) return n-to;
        if(k==to-1) return to;
        return 0;
    }
};
