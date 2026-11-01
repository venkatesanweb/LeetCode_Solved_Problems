class Solution {
    public int[] replaceElements(int[] nums) {
        int maxi=-1;
        int n = nums.length;
        for(int i=n-1;i>=0;i--){
            int temp=maxi;
            // nums[i]=maxi;
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            nums[i]=temp;
        }
        return nums;
    }
}
