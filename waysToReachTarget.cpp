class Solution {
    const int MOD=1000000007;
public:
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        int n=types.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                int count=types[i-1][0],marks=types[i-1][1];
                for(int k=0;k<=count;k++){
                    if(j>=k*marks) dp[i][j]=(dp[i][j]+dp[i-1][j-k*marks])%MOD;
                }
            }
        }
        return dp[n][target];
    }
};
