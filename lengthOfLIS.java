class Solution {
    public int lengthOfLIS(int[] nums) {
        int size=nums.length;
        int dp []= new int[size];
        int maxlen=1;
        Arrays.fill(dp,1);
        for(int i=1;i<size;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=Math.max(dp[i],dp[j]+1);
                }
            }
            maxlen=Math.max(dp[i],maxlen);
        }
        return maxlen;
    }
}
