class Solution {
    int mod = 1000000007;
    private int solve(int i, int j, int[][] grid, int k, int sum, int dp[][][]){
        if(i == grid.length -1 && j == grid[0].length && sum % k == 0) return 1;
        if(i>=grid.length || j>=grid[0].length) return 0;
        if(dp[i][j][sum] != -1) return dp[i][j][sum];
        return dp[i][j][sum] = (solve(i+1,j,grid,k,(sum+grid[i][j])%k,dp)%mod + solve(i,j+1,grid,k,(sum+grid[i][j])%k,dp)%mod)%mod;
    }
    public int numberOfPaths(int[][] grid, int k) {
        int dp[][][] = new int[grid.length][grid[0].length][k+1];
        for(int a[][]:dp){
            for(int b[]:a) Arrays.fill(b,-1);
        }
        return solve(0,0,grid,k,0,dp);
    }
}
