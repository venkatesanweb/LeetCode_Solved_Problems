class Solution {
    public int[] concatWithReverse(int[] nums) {
        int arr[] = new int[nums.length*2];
        int i=0;
        int j=nums.length*2-1;
        int index=0;
        while(i!=nums.length && j!=0){
            arr[i++]=nums[index];
            arr[j--]=nums[index];
            index++;
        }
        return arr;
    }
}
