class Solution {
public:
    long long countCommas(long long n) {
        long long co=0;
        if(n<1000) return 0;
        for(long long i=1000;i<=n;i*=1000){
            co+=n-i+1;
        }
        return co;
    }
};
