class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int pre = cost[0];
        int nexg = cost[1];
        for(int i=2;i<cost.size();i++){
            int temp = cost[i]+min(pre,nexg);
            pre=nexg;
            nexg=temp;
        }
        return min(pre,nexg);
    }
};
