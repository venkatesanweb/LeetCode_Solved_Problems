class Solution {
    public int[] shuffle(int[] nums, int n) {
        int arr[]=new int[2*n];
        int id=0;
        for(int i=0;i<n;i++){
            arr[id++]=nums[i];
            arr[id++]=nums[i+n];
        }
        return arr;
    }
}
