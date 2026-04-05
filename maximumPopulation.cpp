class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> year(101, 0); // 1950 to 2050

        for (auto &log : logs) {
            year[log[0] - 1950]++;
            year[log[1] - 1950]--;
        }

        int maxPop = 0, ansYear = 1950;
        int curr = 0;

        for (int i = 0; i < 101; i++) {
            curr += year[i];
            if (curr > maxPop) {
                maxPop = curr;
                ansYear = 1950 + i;
            }
        }

        return ansYear;
    }
};
