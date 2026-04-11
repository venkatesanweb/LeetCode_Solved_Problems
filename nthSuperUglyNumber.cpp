class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long long> dp(n, 1); 
        vector<int> ptr(primes.size(), 0);
        for (int i = 1; i < n; i++) {
            long long next = LLONG_MAX;
            for (int j = 0; j < primes.size(); j++) {
                next = min(next, dp[ptr[j]] * primes[j]);
            }
            dp[i] = next;
            for (int j = 0; j < primes.size(); j++) {
                if (dp[ptr[j]] * primes[j] == next) {
                    ptr[j]++;
                }
            }
        }
        return dp[n - 1];
    }
};
