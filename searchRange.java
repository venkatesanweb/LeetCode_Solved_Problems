class Solution {
    private static int startIndex(int [] arr,int target){
        int index=-1;
        int low = 0;
        int high = arr.length-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target){
                index=mid;
                high = mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else high = mid-1;
        }
        return index;

    }
    private static int endIndex(int [] arr,int target){
        int low = 0;
        int high = arr.length-1;
        int index=-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target){
                index=mid;
                low=mid+1;
            }
            else if(arr[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return index;
    }
    public int[] searchRange(int[] nums, int target) {
        int arr[]= new int[2];
        arr[0] = startIndex(nums,target);
        arr[1] = endIndex(nums,target);
        return arr;
    }
}
