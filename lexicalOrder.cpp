class Solution {
public:
    vector<int> ans;
    void dfs(int current, int n) {
        if (current > n)
            return;
        ans.push_back(current);
        for (int i = 0; i <= 9; i++) {
            int next = current * 10 + i;
            if (next > n)
                return;
            dfs(next, n);
        }
    }
    vector<int> lexicalOrder(int n) {
        for (int i = 1; i <= 9; i++) {
            dfs(i, n);

        }
        return ans;
    }
};
