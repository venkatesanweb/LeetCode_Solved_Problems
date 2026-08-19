class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        int co = n/3;
        int rem = n%3;
        if(rem==0){
            return pow(3,co);
        }
        else if(rem==1) return pow(3,co-1)*4;
        return pow(3,co)*2;
    }
};
