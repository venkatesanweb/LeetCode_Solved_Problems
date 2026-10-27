class Solution {
    public int sumOfGoodIntegers(int n, int k) {
        int co=0;
        for(int i=Math.max(n-k,0);i<=n+k;i++){
            if(Math.abs(n-i)<=k && (n&i)==0) co+=i;
        }
        return co;
    }
}
