class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int n = nums.length;
        int arr[] = new int[n-k+1];
        Deque<Integer> dq = new LinkedList<>();
        int l=0;
        for(int index=0;index<n;index++){
            while(!dq.isEmpty() && dq.peekFirst()<=index-k){
                dq.pollFirst();
            }
            while(!dq.isEmpty() && nums[dq.peekLast()]<nums[index]){
                dq.pollLast();
            }
            dq.offer(index);
            if(index>=k-1){
                arr[l++]=nums[dq.peekFirst()];
            }
        }
        return arr;
    }
}
