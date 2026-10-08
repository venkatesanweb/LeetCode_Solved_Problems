class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int co=0;
        vector<int> st;
        // int co=0;
        for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
            st.push_back(matrix[i][j]);
           }
        }
        sort(st.begin(),st.end());
        return st[k-1];
    }
};
