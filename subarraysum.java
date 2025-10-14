public class subarraysum {
    public static void main(String[] args) {
        int[] arr = {1,2,3};
        int max=0;
        for (int start = 0; start < arr.length; start++) {//0 ;1;2
            for (int end = start; end < arr.length; end++) {//0 1,2;1,2;2
                int sum = 0;
                int count=0;
                for (int k = start; k <= end; k++) {//0;0,1;0,1;0,1,2;;1;1,2;2;   ;;;1;1,2;1,2,3;;2;2,3;;3
                    sum += arr[k];
                    count++;
                }
                if(sum==3 && count>max){
                    max=count;
                }
                
            }
        }
        System.out.println(max);

    }
}
