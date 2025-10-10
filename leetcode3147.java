public class leetcode3147 {
    
    static public int maximumEnergy(int[] energy, int k) {
        int n=energy.length;
        int max=Integer.MIN_VALUE;
        int i=n-1;
        while(i>=0){
            if(k+i<n){
                energy[i]+=energy[k+i];
            }
            max=Math.max(max,energy[i]);
            i--;
        }
        return max;
    }
    public static void main(String[] args) {
      int[] arr={5,2,-10,-5,1};
      int s=maximumEnergy(arr, 3);
      System.out.println(s);
    }
}
