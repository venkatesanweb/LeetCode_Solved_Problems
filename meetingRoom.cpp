public static boolean meetingRoom(int[][] arr){
    Arrays.sort(arr, (a, b) -> a[0] - b[0]);

    int pre = arr[0][1];

    for(int i = 1; i < arr.length; i++){
        if(pre > arr[i][0])
            return false;
        else
            pre = arr[i][1];
    }

    return true;
}
