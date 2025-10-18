import java.util.Arrays;

public class patterns {
    public static void main(String[] args) {
        int a=4;
        // for(int i=1;i<=a;i++){
        //     for(int j=a;j>=i;j--){
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }
        int arr[]={4,3,2,1};
        // triangle(a,0);
        // triangle2(a, 0);
        booble(arr, arr.length-1,0);
        System.out.println(Arrays.toString(arr));

    }
    static void triangle(int a,int count){
        if(a==0){
            return;
        }
        if(a>count){
            System.out.print("* ");
            count++;
            triangle(a, count);
        }
        else{
            System.out.println();
            count=0;
            --a;
            triangle(a, count);
        }
    }
    static void triangle2(int r,int c){
        if(r==0){
            return;
        }
        if(c<r){
            triangle2(r,c+1);
            System.out.print("*");
        }
        else{
            
            triangle2(r-1, 0);
            System.out.println();
        }
    }
   static void booble(int[]arr,int r,int c){
        if(r==0){
            return;
        }
        if(r>c){
        if(arr[c]>arr[c+1]){
            int temp=arr[c];
            arr[c]=arr[c+1];
            arr[c+1]=temp;
        }
        booble(arr, r, c+1);
    }
    else{
        booble(arr, r-1, 0);
    }

    }
}
