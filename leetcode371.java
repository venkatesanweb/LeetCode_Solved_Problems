public class leetcode371 {
    
    static public int getSum(int a, int b) {
        while (b != 0) {
            int carry = (a & b) << 1;  
            a = a ^ b;                
            b = carry;               
        }
        return a;
    }
    public static void main(String[] args) {
        int s=getSum(1, 2);
        System.out.println(s);
    }
}
