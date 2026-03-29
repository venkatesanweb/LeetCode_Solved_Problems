class Solution {
public:
    long long removeZeros(long long n) {
        long long s=0;
        while(n>0){
            int dig=n%10;
            if(dig!=0){
                s=s*10+dig;
            }
            n/=10;
        }
        long long ans=0;
        while(s>0){
            ans=ans*10+s%10;
            s/=10;
        }
        return ans;

    }
};
