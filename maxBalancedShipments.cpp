class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
    int res = 0;
    for (int i = 1; i < w.size(); ++i)
        if (w[i - 1] > w[i]) {
            ++res;
            ++i;
        }
    return res;
    }   
};
