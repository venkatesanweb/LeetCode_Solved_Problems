public class recursion {

    public static void printnum(int a){
        if(a==0){
           
            return;
        }
        System.out.println(a);
        printnum(a-1);
        System.out.println(a);
    }
    public static int fact(int a){
        if(a<=1){
            return 1;
        }
        return a *fact(a-1);
    }
    public static int sum(int a){
        if(a==1){
            return 1;
        }
        return a +sum(a-1);
    }
    public static int sumofDigits(int a){
        if(a==0){
            return a;
        }
        return a%10+sumofDigits(a/10);
    }
    static int productDigts(int a){
        if(a<=9){
            return a;
        }
        return (a%10) * productDigts(a/10);
    }
    static void passNumbers(int a){
        if(a==0){
            return;
        }
        passNumbers(--a);
        System.out.println(a);
    }
    static int rversenum(int a){
        if(a%10==a){
            return a;
        }
        return a;
    }
    static int reversenum(int a){
        if(a%10==a){
            
            return a;
        }
        return ((a%10)*10)+reversenum(a/10);
        
    }
    public static void main(String[] args) {
        // printnum(5);
        // System.out.println(fact(5));
        // System.out.println(sum(10));
        // System.out.println(sumofDigits(12378));
        // System.out.println(productDigts(523));
        // passNumbers(5);
        System.out.println(reversenum(123));
    }
}