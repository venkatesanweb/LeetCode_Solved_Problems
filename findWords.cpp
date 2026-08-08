class Solution {
public:

    bool isSameRow(string s) {
        if (s.empty())
            return false;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        int flag = -1;
        // Find the row of the first character
        char first = tolower(s[0]);
        if (row1.find(first) != string::npos) {
            flag = 1;
        }
        else if (row2.find(first) != string::npos) {
            flag = 2;
        }
        else if (row3.find(first) != string::npos) {
            flag = 3;
        }
        for (int i = 1; i < s.size(); i++) {
            char ch = tolower(s[i]);
            int flag1 = -1;
            if (row1.find(ch) != string::npos) {
                flag1 = 1;
            }
            else if (row2.find(ch) != string::npos) {
                flag1 = 2;
            }
            else if (row3.find(ch) != string::npos) {
                flag1 = 3;
            }
            if (flag != flag1)
                return false;
        }

        return true;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            if (isSameRow(words[i])) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};
