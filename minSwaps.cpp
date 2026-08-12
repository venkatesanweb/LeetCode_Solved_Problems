class Solution {
public:
    int minSwaps(string s) {
        int openbrk =0;
        int closebrk=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[') openbrk++;
            else openbrk--;
            closebrk=min(openbrk,closebrk);
        }
        return (-closebrk+1)/2;
    }
};
