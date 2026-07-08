class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        int t1size=text1.length(),t2size=text2.length();
        int dp[][]= new int[t1size+1][t2size+1];
        for(int i=1;i<=t1size;i++){
            for(int j=1;j<=t2size;j++){
                if(text1.charAt(i-1)==text2.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[t1size][t2size];
    }
}
