class Solution {
    public int LIS(int[] nums) {
        int dp[][] = new int[nums.length][nums.length+1];
        for(int [] arr : dp){
            Arrays.fill(arr,-1);
        }
        return helpSpace(nums);
    }
    // private static int help(int arr[],int idx,int idx_prv,int dp[][]){
    //     if(arr.length==idx) return 0;
    //     if(dp[idx][idx_prv+1]!=-1) return dp[idx][idx_prv+1];
    //     int len = 0 + help(arr,idx+1,idx_prv,dp);
    //     if(idx_prv==-1 || arr[idx]>arr[idx_prv]){
    //         len =Math.max(1 + help(arr,idx+1,idx,dp),len);
    //     }
    //     return dp[idx] [idx_prv+1] = len;
    // } 
    private static int helpTable(int [] arr){
        int n = arr.length;
        int [][]dp = new int[n+1][n+1];
        for(int idx=n-1;idx>=0;idx--){
            for(int pre_idx =idx-1;pre_idx>=-1;pre_idx--){
                int len = 0 + dp[idx+1][pre_idx+1];
                if(pre_idx==-1 || arr[idx]>arr[pre_idx]){
                    len = Math.max(1 + dp[idx+1][idx+1],len);
                }
                dp[idx][pre_idx+1]=len;
            }
        }
        return dp[0][0];
    }
    private static int helpSpace(int [] arr){
        int n = arr.length;
        int [] pre = new int[n+1];
        int [] curr = new int[n+1];
        for(int idx=n-1;idx>=0;idx--){
            for(int pre_idx =idx-1;pre_idx>=-1;pre_idx--){
                int len = 0 + pre[pre_idx+1];
                if(pre_idx==-1 || arr[idx]>arr[pre_idx]){
                    len = Math.max(1 + pre[idx+1],len);
                }
                curr[pre_idx+1]=len;
            }
            pre=curr;
        }
        return pre[0];
    }
}

