class FenTree {
public:
    int n;
    vector<int> tree;

    FenTree(int n) : n(n), tree(n + 2, 0) {}

    void update(int i, int d) {
        while (i <= n) {
            tree[i] += d;
            i += i & -i;
        }
    }

    int query(int i) {
        int s = 0;
        while (i > 0) {
            s += tree[i];
            i -= i & -i;
        }
        return s;
    }

    void range_update(int l, int r, int d) {
        update(l, d);
        update(r + 1, -d);
    }
};

class Solution {
public:
    vector<int> t_in, t_out, dist;
    int timer = 1;
    unordered_map<int, vector<pair<int, int>>> adj;
    map<pair<int, int>, int> mp;

    void dfs(int u, int parent, int d) {
        dist[u] = d;
        t_in[u] = timer++;

        for (auto &[v, w] : adj[u]) {
            if (v == parent) continue;
            mp[{u, v}] = w;
            dfs(v, u, d + w);
        }

        t_out[u] = timer - 1;
    }

    vector<int> treeQueries(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
        t_in.resize(n + 1);
        t_out.resize(n + 1);
        dist.resize(n + 1);

        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }

        dfs(1, 0, 0);
        FenTree bit(n);
        vector<int> ans;

        for (auto &q : queries) {
            if (q[0] == 1) {
                int u = q[1], v = q[2], new_w = q[3];
                int parent = (t_in[u] < t_in[v]) ? u : v;
                int child = (t_in[u] < t_in[v]) ? v : u;
                int old_w = mp[{parent, child}];
                int d = new_w - old_w;

                bit.range_update(t_in[child], t_out[child], d);
                mp[{parent, child}] = new_w;
            } else {
                int x = q[1];
                ans.push_back(dist[x] + bit.query(t_in[x]));
            }
        }

        return ans;
    }
};
