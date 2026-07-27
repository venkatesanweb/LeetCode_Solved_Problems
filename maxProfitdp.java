class Solution {
    public int maxProfit(int[] arr) {
        int dp[][][] = new int[arr.length+1][2][3];
        // for(int [][] temp : dp){
        //     for(int [] temp1 : temp){
        //         Arrays.fill(temp1,-1);
        //     }
        // }
        return helptabel(arr,dp);
    }
    int help(int[] arr,int buy,int index,int cup,int dp[][][]){
        if(cup==0) return 0;
        if(index==arr.length) return 0;
        if(dp[index][buy][cup]!=-1) return dp[index][buy][cup];
        int profit=0;
        if(buy==1){
            profit=Math.max(-arr[index]+help(arr,0,index+1,cup,dp),help(arr,1,index+1,cup,dp));
        }
        else{
            profit = Math.max(arr[index]+help(arr,1,index+1,cup-1,dp),help(arr,0,index+1,cup,dp));
        }
        return dp[index][buy][cup]=profit;
    }
    int helptabel(int[] arr,int dp[][][]){
        // for(int i=0;i<arr.length;i++){
        //     dp[i][0][0]=0;
        // }
        for(int index=arr.length-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                for(int cup=1;cup<=2;cup++){
                    int profit=0;
                    if(buy==1){
                        profit=Math.max(-arr[index]+dp[index+1][0][cup],dp[index+1][1][cup]);
                    }
                    else{
                        profit = Math.max(arr[index]+dp[index+1][1][cup-1],dp[index+1][0][cup]);
                    }
                    dp[index][buy][cup]=profit;
                }
            }
        }
        return dp[0][1][2];
    }
    int helpSpace(int[] arr,int dp[][][]){
        // for(int i=0;i<arr.length;i++){
        //     dp[i][0][0]=0;
        // }
        int [][] pre = new int[2][3];
        int [][] curr = new int[2][3];
            for(int index=arr.length-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                for(int cup=1;cup<=2;cup++){
                    int profit=0;
                    if(buy==1){
                        profit=Math.max(-arr[index]+pre[0][cup],pre[1][cup]);
                    }
                    else{
                        profit = Math.max(arr[index]+pre[1][cup-1],pre[0][cup]);
                    }
                    curr[buy][cup]=profit;
                }
            }
            pre=curr;
        }
        return pre[1][2];
    }
}
