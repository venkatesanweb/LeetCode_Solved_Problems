import java.util.*;
public class LinearSearch{

static int helpher(int[] arr,int ele,int counter){
	if(counter==arr.length){
	return -1;
	}
	
	if(arr[counter]==ele){
	return counter;
	}
	return helpher(arr,ele,counter+1);
}
static int linerarev(int[] arr,int ele,int counter){
	if(counter<0){
	return -1;
	}
	
	if(arr[counter]==ele){
	return counter;
	}
	return linerarev(arr,ele,counter-1);
}

static ArrayList<Integer>lis=new ArrayList<>();

static void findallIndex(int[] arr,int ele,int count){
if(count==arr.length){
	return;
}
if(arr[count]==ele){
	lis.add(count);
}
findallIndex(arr,ele,count+1);
}
static List<Integer> findallIndexlist(int[] arr,int ele,int count,ArrayList<Integer>list){
if(count==arr.length){
	return list;
}
if(arr[count]==ele){
	list.add(count);
}
return findallIndexlist(arr,ele,count+1,list);
}


public static void main(String[] args){
int arr[]={1,2,3,4,4,5};
int ans=helpher(arr,10,0);
int ansre=linerarev(arr,10,arr.length-1);
System.out.println(ans);
System.out.println(ansre);
findallIndex(arr,4,0);
System.out.println(lis);
ArrayList<Integer>list=new ArrayList<>();
System.out.println(findallIndexlist(arr,4,0,list));


}

}