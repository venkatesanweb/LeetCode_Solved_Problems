class Solution {
    public String shortestCommonSupersequence(String s1, String s2) {
        return lcs( s1,  s2);
        
    }
    private String lcs(String s1, String s2){
        int n = s1.length(), m = s2.length();
        int dp[][] = new int[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1.charAt(i-1)==s2.charAt(j-1)){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        StringBuilder ans = new StringBuilder();
        while(n>0 && m>0){
            if(s1.charAt(n-1)==s2.charAt(m-1)){
                ans.append(s1.charAt(n-1));
                n--;
                m--;
            }
            else if(dp[n-1][m]>dp[n][m-1]){
                ans.append(s1.charAt(n-1));
                n--;
            }
            else{
                ans.append(s2.charAt(m-1));
                m--;
            }
        }
        while(n>0){
            ans.append(s1.charAt(n-1));
            n--;
        }
        while(m>0){
            ans.append(s2.charAt(m-1));
            m--;
        }
        return ans.reverse().toString();
    }
}
