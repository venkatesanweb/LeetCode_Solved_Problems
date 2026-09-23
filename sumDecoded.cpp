class Solution {
public:
long long modpow(long long x,long long y){
        long long MOD = 1e9+7;
        long long res = 1;
        while(y>0){
            if(y & 1){
                res = res*x % MOD;
            }
            x = x*x %MOD;
            y >>= 1;
        }
        return res;
    }
    int sumDecoded(vector<long long>& nums) {
        long long sum=0;
        int mod = 1e9+7;
        for(long long val : nums){
            long long wid = val%10;
            long long d = val/10;
            string s = to_string(d);
            string tempx= s.substr(0,wid);
            string tempy= s.substr(wid);
            long long x = stoll(tempx);
            long long y = stoll(tempy);
            long long p= ((long long)modpow(x,y))%mod;
            sum=(sum+p)%mod;
        }
        return sum;
    }
};
