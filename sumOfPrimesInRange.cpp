class Solution {
public:
    bool prime(int i){
        if(i<=1) return false;
        if(i==2) return true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int sum=0;
        int rev =0;
        int temp=n;
        while(temp!=0){
            rev = rev*10 + temp%10;
            temp/=10;
        }
        int mini=min(rev,n);
        int maxi=max(rev,n);
        for(int i=mini;i<=maxi;i++){
            if(prime(i)) sum+=i;
        }
        return sum;
    }
};
