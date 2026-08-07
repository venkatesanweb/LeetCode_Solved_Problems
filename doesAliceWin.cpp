class Solution {
public:
    bool doesAliceWin(string s) {
        int co=0;
        for(char ch : s){
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch =='i' || ch=='o' || ch=='u') co++;
        }
        return co>0;
    }
};
