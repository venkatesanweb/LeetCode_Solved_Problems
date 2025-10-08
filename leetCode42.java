class leetCode42 {
    static public int trap(int[] height) {
        int left = 0;
        int right = height.length - 1;
        int max_left = 0;
        int max_right = 0;
        int trapedwatersum = 0;
        while (left < right) {
            max_left = Math.max(max_left, height[left]);
            max_right = Math.max(max_right, height[right]);
            if (height[left] <= height[right]) {
                trapedwatersum += max_left - height[left];
                left++;
            } else {
                trapedwatersum += max_right - height[right];
                right--;
            }
        }
        return trapedwatersum;

    }

    public static void main(String[] args) {
        int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
        int res = trap(arr);
        System.out.println(res);
    }
}