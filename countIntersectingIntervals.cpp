class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int co=0;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            int st1 = intervals[i][0];
            int ed1 = intervals[i][1];
            for(int j=i+1;j<n;j++){
                int st2=intervals[j][0];
                int ed2=intervals[j][1];
                if(st1<=ed2 && st2<=ed1) co++;
            }
        }
        return co;
    }
};
