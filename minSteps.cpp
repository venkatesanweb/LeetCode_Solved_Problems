class Solution {
public:
    int minSteps(string s, string t) {
        array<int,26> mp1{};
        array<int,26> mp2{};
        for(char ch : s){
            int idx = ch-'a';
            ++mp1[idx];
        }
        for(char ch : t){
            int idx = ch-'a';
            ++mp2[idx];
        }
        int co=0;
        for(int i=0;i<26;i++){
            char ch1 = 'a'+i;
            char ch2 = 'a'+i;
            if(ch1==ch2){
                if(mp1[i]==mp2[i]){
                    continue;
                }
                else{
                    co +=(mp1[i]>mp2[i] ? mp1[i]-mp2[i]:mp2[i]-mp1[i]);
                }
            }
            else{
                co+=(mp1[i]+mp2[i]);
            }
        }
        return co/2;

    }
};
