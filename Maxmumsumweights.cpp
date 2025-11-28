class Solution {
public:

    long long maximizeSumOfWeights(vector<vector<int>>& edges, int k) {
        int n = edges.size() + 1;
        long long result =0;
        vector<vector<pair<int,int>>> adj(n);
        vector<int> degree(n,0);
        for(auto e : edges){
            int from = e[0];
            int to = e[1];
            int wt = e[2];
            degree[from]++;
            degree[to]++;
            adj[from].emplace_back(to,wt);
            adj[to].emplace_back(from,wt);
        }

        function<vector<long long>(int,int)> dfs = [&](int index,int parent){
            long long res =0;
            long long res2 =0;
            vector<int> v;
            for(auto e : adj[index]){
                int nbr = e.first;
                int wt = e.second;
                if(nbr == parent) continue;

                vector<long long> temp = dfs(nbr,index);

                res += temp[1];
                v.push_back(max(0ll, temp[0] + wt - temp[1]));
            }

            if(v.size() >= k){
                nth_element(v.begin(),v.begin() + k-1,v.end(),greater<int>());
            }

            for(int i = 0;i<k-1 && i < v.size();i++){
                res += v[i];
            }
            res2 = v.size() >=k ? res + v[k-1] : res;
            vector<long long> result;
            result.push_back(res);
            result.push_back(res2);
            return result;
        };
        return dfs(0,-1)[1];  
    }
};
