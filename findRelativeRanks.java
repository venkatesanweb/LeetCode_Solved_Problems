class Solution {
    public String[] findRelativeRanks(int[] score) {
        PriorityQueue<Integer> qu = new PriorityQueue<>();
        for(int val : score) qu.offer(val);
        int n = score.length;
        String[] ans = new String[n];
        int temp=n;
        while(!qu.isEmpty()){
            int val = qu.poll();
            for(int i=0;i<n;i++){
                if(val==score[i]){
                    if(temp>3){
                        ans[i]=""+temp;
                        temp--;
                        break;
                    }
                    else{
                        if(temp==3){
                            ans[i]="Bronze Medal";
                            temp--;
                            break;
                        }
                        else if(temp==2){
                            ans[i]="Silver Medal";
                            temp--;
                            break;
                        }
                        else if(temp==1){
                            ans[i]="Gold Medal";
                            temp--;
                            break;
                        }

                        
                    }
                }
            }
        }
        return ans;
    }
}
