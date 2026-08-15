class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int c = 0, f = 0;
        int n = derived.size();
        for (int i = 0; i < derived.size() - 1; i++) {
            c ^= derived[i];
        }
        if (derived[n-1] == (f ^ c)) return true;

        c = 1, f = 1;
        for (int i = 0; i < derived.size() - 1; i++) {
            c ^= derived[i];
        }
        return derived[n-1] == (f ^ c);
    }
};
