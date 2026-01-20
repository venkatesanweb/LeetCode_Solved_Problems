class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(vector<int>vcs:accounts){
            int sum=0;
            for(int val:vcs){
                sum+=val;
            }
            if(sum>max) max=sum;
        }
        return max;
    }
};
