class Solution {
public:
    int countVowelSubstrings(string word) {
        int co = 0;
        for (int i = 0; i < word.size(); i++) {
            set<char> st;
            for (int j = i; j < word.size(); j++) {
                char ch = word[j];
                if (ch != 'a' && ch != 'e' && ch != 'i' &&
                    ch != 'o' && ch != 'u') {
                    break;
                }
                st.insert(ch);
                if (st.size() == 5)
                    co++;
            }
        }
        return co;
    }
};
