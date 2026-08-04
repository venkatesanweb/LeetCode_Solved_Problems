class Solution {
public:
    bool checkGoodInteger(int n) {
        int sumdig =0;
        int squresum=0;
        while(n!=0){
            int dig = n%10;
            sumdig+=dig;
            squresum+=(dig*dig);
            n/=10;
        }
        squresum=squresum-sumdig;
        if(squresum>=50) return true;
        return false;
    }
};
