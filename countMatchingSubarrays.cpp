class Solution {
public:
    void lpsFinder(vector<int>& lps, vector<int> s) {
        int n = s.size();
        int prefix = 0, suffix = 1;
        while (suffix < n) {
            if (s[prefix] == s[suffix]) {
                lps[suffix] = prefix + 1;
                suffix++;
                prefix++;
            } else {
                if (prefix == 0)
                    suffix++;
                else
                    prefix = lps[prefix - 1];
            }
        }
    }
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])
                ans.push_back(1);
            else if (nums[i] < nums[i - 1])
                ans.push_back(-1);
            else
                ans.push_back(0);
        }
        vector<int> lps(pattern.size(), 0);
        lpsFinder(lps, pattern);
        int count = 0;
        int first = 0, second = 0;
        int startPoint = 0;
        n = ans.size();
        int m = pattern.size();
        while (first < n) {
            if (ans[first] == pattern[second]) {
                first++;
                second++;
                if (second == m) {
                count++;
                second=lps[second-1];
            }
            } else {
                if (second == 0)
                    first++;
                else
                    second = lps[second - 1];
            }
            
        }

        return count;
    }
};
