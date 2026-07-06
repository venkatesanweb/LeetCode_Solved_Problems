class Solution {
    public int removeCoveredIntervals(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->{
            if(a[0]==b[0]) return b[1]-a[1];
            return a[0]-b[0];
        });
        int co =0;
        int maxi = intervals[0][1];
        for(int i=1;i<intervals.length;i++){
            if(maxi>=intervals[i][1]){
                co++;
            }
            else   maxi = intervals[i][1];
        }
        return intervals.length-co;
    }
}
