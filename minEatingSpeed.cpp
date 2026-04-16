class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int p : piles) high = max(high, p);
        
        int result = high;

        while (low <= high) {
            int k = low + (high - low) / 2;
            long long totalTime = 0;

            for (int p : piles) {
                totalTime += (p + k - 1LL) / k;
            }

            if (totalTime <= h) {
                result = k;
                high = k - 1;
            } else {
                low = k + 1;
            }
        }
        return result;
    }
};
