class Solution {
    public int maxProfit(int[] prices) {
        // int dp[][] = new int[prices.length][2];
        // for(int[] arr: dp){
        //     Arrays.fill(arr,-1);
        // }
        return helpspace(prices);
    }
    int helpMemo(int[] arr,int indx,int buy,int[][] dp){
        if(indx==arr.length) return 0;
        int proft = 0;
        if(dp[indx][buy]!=-1) return dp[indx][buy];
        if(buy==1){
            proft =Math.max(-arr[indx] + helpMemo(arr,indx+1,0,dp) , helpMemo(arr,indx+1,1,dp));
        }
        else{
            proft = Math.max(arr[indx] + helpMemo(arr,indx+1,1,dp),helpMemo(arr,indx+1,0,dp));
        }
        return dp[indx][buy] = proft;
    }
    int helpTab(int[] arr){
        int n=arr.length;
        int[][] dp = new  int[n+1][2];
        dp[n][1]=0;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                int proft=0;
                if(j==1){
                    proft =Math.max(-arr[i] + dp[i+1][0] , dp[i+1][1]);
                }
                else{
                    proft = Math.max(arr[i] + dp[i+1][1],dp[i+1][0]);
                }
                dp[i][j]=proft;
            }
        }
        return dp[0][1];
    }
    int helpspace(int[] arr){
        int n=arr.length;
        int pre[] = new  int[2];
        int curr[] = new int[2];
        // dp[1]=0;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                int proft=0;
                if(j==1){
                    proft =Math.max(-arr[i] + pre[0] , pre[1]);
                }
                else{
                    proft = Math.max(arr[i] + pre[1], pre[0]);
                }
                curr[j]=proft;
            }
            pre=curr;
        }
        return pre[1];
    }
}
