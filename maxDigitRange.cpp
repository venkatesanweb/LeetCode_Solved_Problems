class Solution {
public:
    int maxDigitRange(vector<int>& nums) {

        int maxRange = -1;
        int sum = 0;

        for (int val : nums) {
            int maxi = 0;
            int mini = 9;
            if (val == 0) {
                maxi = mini = 0;
            } else {
                int temp = val;
                while (temp) {
                    int d = temp % 10;
                    maxi = max(maxi, d);
                    mini = min(mini, d);
                    temp /= 10;
                }
            }
            int range = maxi - mini;
            if (range > maxRange) {
                maxRange = range;
                sum = val;
            }
            else if (range == maxRange) {
                sum += val;
            }
        }
        return sum;
    }
};
