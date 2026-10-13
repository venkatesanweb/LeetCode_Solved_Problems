class Solution {
    public long maxAlternatingSum(int[] nums) {
        long evensum=0;
        long oddsum=0;
        int n = nums.length;
        for(int i=0;i<n;i++){
            nums[i]=Math.abs(nums[i]);
        }
        // int i=0,j=n-1;
        Arrays.sort(nums);
        // int idx=n%2!=0 ? n/2:n/2;
        for(int k=0;k<idx;k++){
            evensum+=(nums[k]*nums[k]);
        }
        System.out.println(idx+"  ");
        for(int k=idx;k<n;k++){
            oddsum+=(nums[k]*nums[k]);
        }
        return Math.abs(evensum-oddsum);
        

    }
}
