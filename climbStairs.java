class Solution {
    public int climbStairs(int n) {
        if(n==1) return n;
        int pre=1;
        int next=2;
        for(int i=3;i<=n;i++){
            int total=pre+next;
            pre=next;
            next=total;
        }
        return next;
    }
}

class Solution {
    public int climbStairs(int n) {
        if(n==1 || n==2) return n;
        return climbStairs(n-1) + climbStairs(n-2);
    }
}
