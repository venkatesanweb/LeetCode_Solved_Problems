class Solution {
public:
    int passwordStrength(string password) {
        int sum=0;
        set<char> st(password.begin(),password.end());
        for(char ch : st){
            int val = ch-'0';
            if(ch>='a' && ch<='z') sum+=1;
            else if(ch>='A' && ch<='Z') sum+=2;
            else if(ch=='!' || ch=='@' || ch=='$' || ch=='#') sum+=5;
            else if(val>=0 && val<=9) sum+=3;
        }
        return sum;
    }
};
