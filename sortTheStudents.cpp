class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int, vector<int>>> vc;
        for (int i = 0; i < score.size(); i++) {
            vc.push_back({score[i][k], score[i]});
        }
        sort(vc.begin(), vc.end(), greater<>());
        for (int i = 0; i < score.size(); i++) {
            score[i] = vc[i].second;
        }
        return score;
    }
};
