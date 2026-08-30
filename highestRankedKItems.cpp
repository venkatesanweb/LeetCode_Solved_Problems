class Solution {
public:
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid,
                                            vector<int>& pricing,
                                            vector<int>& start, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans;
        queue<pair<int, int>> q;
        q.push({start[0], start[1]});
        vector<vector<int>> dist(n, vector<int>(m, -1));
        dist[start[0]][start[1]] = 0;
        vector<tuple<int, int, int, int>> items;
        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int row = it.first;
            int col = it.second;
            int d = dist[row][col];
            int drow[] = {-1, 0, 1, 0};
            int dcol[] = {0, 1, 0, -1};
            if (grid[row][col] >= pricing[0] && grid[row][col] <= pricing[1]) {
                items.push_back({d, grid[row][col], row, col});
            }

            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow < n && ncol < m && nrow >= 0 && ncol >= 0 &&
                    dist[nrow][ncol] == -1 && grid[nrow][ncol] != 0) {
                    dist[nrow][ncol] = d + 1; 
                    q.push({nrow, ncol});
                    
                }
            }
        }

        sort(items.begin(), items.end());
        for (int i = 0; i < min(k, (int)items.size()); i++) {
            auto [d, price, row, col] = items[i];
            ans.push_back({row, col});
        }
        return ans;
    }
};
