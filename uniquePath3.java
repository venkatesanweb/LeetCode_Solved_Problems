public class uniquePath3{

public static void main(String[] args){

	int arr[][]=[[1,0,0,0],[0,0,0,0],[0,0,0,2]];

	int val=uniquePathFind(arr);
	System.out.print(val);

}

private static int uniquePathFind(int [][] arr){
	int zero=0;
	int x=0,y=0;
	
	for(int i=0;i<arr.length;i++){

	for(int j=0;j<arr[0].length;j++){
	if(arr[i][j]==1){
	x=i;
	y=j;
}
	if(arr[i][j]==0){
	zero++;
}

}
}
	return backtrack(arr,x,y,zero);
}

private static int backtrack(int [][] arr,int x,int y,int zero){

	if(x<0||y<0||x>=arr.length||y>=arr[0].length||arr[x][y]==-1){
	return 0;
}
	if(arr[x][y]==2){
	return zero==-1 ? 1:0;
}
	arr[x][y]=-1;
	zero--;
	
	int res=backtrack(arr,x-1,y,zero)+backtrack(arr,x+1,y,zero)+backtrack(arr,x,y-1,zero)+backtrack(arr,x,y+1,zero);
	arr[x][y]=0;
	zero++;
	return res;
}


}