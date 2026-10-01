class Solution {
public:
    int minimumMoves(string s) {
        int co=0;
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(temp==0 && s[i]=='O') continue;
            else temp++;
            if(temp==3) {
                co++;
                temp=0;
            }
        }
        if(temp!=0) co++;
        return co;
    }
};
