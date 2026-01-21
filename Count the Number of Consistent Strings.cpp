class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26, 0);
        for (int i = 0; i < allowed.size(); i++) {
            freq[allowed[i] - 'a'] = 1;
        }
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (freq[words[i][j] - 'a'] == 0) {
                    count++;
                    break;
                }
            }
        }
        return words.size() - count;
    }
};
