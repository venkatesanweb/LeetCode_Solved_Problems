class Solution {
public:
    int solve(int left, int right, vector<int>& arr){
     int x=0;

     for(int i=left; i<=right; i++){
        x= x^arr[i];
     }
     return x;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int> ans;

        for(int i=0; i<queries.size(); i++){
            ans.push_back(solve(queries[i][0], queries[i][1], arr));
        }
        return ans;
    }
};
