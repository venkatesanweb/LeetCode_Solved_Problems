import java.util.HashMap;

public class leetcode523 {
   
   static public boolean checkSubarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int prefixs = 0;
        map.put(0, -1);
        for (int i = 0; i < nums.length; i++) {
            prefixs += nums[i];  
            int remainder = prefixs % k;  
            if (remainder < 0) remainder += k;
            
            if (!map.containsKey(remainder)) {
                map.put(remainder, i);
            }
            else if (i - map.get(remainder) > 1) {
                return true;  
            }
        }
        return false; 
    }
    public static void main(String[] args) {
        int arr[]={23,2,4,6,7};
        System.out.println(checkSubarraySum(arr, 6));
    }

}
