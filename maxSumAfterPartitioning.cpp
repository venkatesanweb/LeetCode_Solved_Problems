class Solution {
public:
    int fun(vector<int> vc,int k,int idx,vector<int> &dp){
        int n = vc.size();
        if(idx==n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int len=0;
        int maxival=INT_MIN;
        int maxiAns=INT_MIN;
        for(int i=idx;i<min(n,idx+k);i++){
            len++;
            maxival=max(maxival,vc[i]);
            maxiAns=max(maxiAns,len*maxival+fun(vc,k,i+1,dp));
        }
        return dp[idx]=maxiAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(arr.size()+1,0);
        // dp[n]=0;
        for(int idx=n-1;idx>=0;idx--){
            int len=0;
            int maxival=INT_MIN;
            int maxiAns=INT_MIN;
            for(int j=idx;j<min(n,idx+k);j++){
                len++;
                maxival=max(maxival,arr[j]);
                maxiAns=max(maxiAns,len*maxival+dp[j+1]);
            }
            dp[idx]=maxiAns;
        }

        return dp[0];
    }
};
