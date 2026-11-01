class Solution {
    public double trimMean(int[] arr) {
        int n = arr.length;
        int per = n * 5/100;
        Arrays.sort(arr);
        double sum =0;
        int co=0;
        for(int i = per;i<n-per;i++){
            sum+=arr[i];
            co++;
        }

        return sum/co;
        
    }
}
