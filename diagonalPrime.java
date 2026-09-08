class Solution {
    public static boolean prime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public int diagonalPrime(int[][] nums) {
        int n = nums.length;
        int mx = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(prime(nums[i][i])){
                mx=Math.max(mx,nums[i][i]);
            }
            if(prime(nums[i][n-i-1])){
                mx=Math.max(mx,nums[i][n-i-1]);
            }
        }
        return mx==Integer.MIN_VALUE ? 0 : mx;
    }
}
