class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(), nums.end());

        vector<int> pref(n);
        pref[0] = nums[0];

        for (int i = 1; i < n; i++) {
            pref[i] = nums[i] + pref[i - 1];
        }

        vector<int> answer(m);

        for (int i = 0; i < m; i++) {
            int left = 0, right = n - 1;
            int ans = 0;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (pref[mid] <= queries[i]) {
                    ans = mid + 1;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            answer[i] = ans;
        }

        return answer;
    }
};
