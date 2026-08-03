class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        int t1=0;
        int t2=1;
        int t3=1;
        for(int i=3;i<=n;i++){
            int next=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=next;
        }
        return t3;
        
    }
};
