public static int KadanesAlgo(int [] arr){
        int max =0;
        int sum=0;
        int maxi=Integer.MIN_VALUE;
        for(int val: arr){
            sum+=val;
            if(sum>max){
                max=sum;
            }
            if(sum<0) sum=0;
            maxi =Math.max(maxi,val);
        }
        max= sum==0 ?  maxi : max;
        return max;
    }
