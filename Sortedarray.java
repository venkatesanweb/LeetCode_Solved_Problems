public class Sortedarray{

private static boolean arraySortes(int[] arr,int index){
	return helper(arr,index);
}
private static boolean helper(int[] arr,int index){
	if(index==(arr.length-1)){
	return true;
}
if(arr[index]<arr[index+1]){
return helper(arr,index+1);
}
return false;
}


public static void main(String [] args){
	int arr[]={1,2,3,4,5,3};
	System.out.println(arraySortes(arr,0));
}

}