class Solution {
public:
    bool validDigit(int n, int x) {
        int dig =0;
        bool flag = false;
        while(n!=0){
            dig=n%10;
            n/=10;
            if(dig==x) flag=true;
        }
        if(flag && dig!=x) return true;
        return false;
    }
};
