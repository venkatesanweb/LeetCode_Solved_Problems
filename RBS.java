public class RBS {
    public static void main(String[] args) {
        int arr[]={5,6,7,8,9,1,2,3};
        System.out.println(Search(arr, 90, 0, arr.length-1));
    }
    static int Search(int arr[],int target,int s,int e){
        if(s>e){
            return -1;
        }

        int m=s+(e-s)/2;
        if(arr[m]==target){
            return m;
        }
        if(arr[s]<=arr[m]){
            if(target>=arr[s] && target<=arr[m]){
                return Search(arr, target, s, m-1);
            }
            else{
                return Search(arr, target, m+1, e);
            }
        }
        if(target>=arr[m] && target<=arr[e]){
            return Search(arr, target, m+1, e);
        }
        
        return Search(arr, target, s, m-1);
        

    }
}
