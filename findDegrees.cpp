class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        vector<int> vc;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<matrix.size();j++){
                sum+=(matrix[j][i]);
            }
            vc.push_back(sum);
        }
        return vc;
    }
};
