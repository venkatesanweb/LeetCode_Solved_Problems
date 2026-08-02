class Solution {
    public int smallestRangeI(int[] nums, int k) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int val:nums){
            max=Math.max(val,max);
            min=Math.min(val,min);
        }
        return Math.max(0,max-min-2*k);
    }
}
