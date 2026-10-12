class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n==1) return false;
        long pre=0;
        long next=1;
        for(int i=1;i<=n/2;i++){
            long temp=pre+next;
            if(temp>=n) return false;
            if((pre+next)==(n-temp)) return true;
            pre=next;
            next=temp;
        }
        return false;
    }
};
