class WordDictionary {
private:
    struct Node {
        Node* links[26];
        bool flag;

        Node() {
            flag = false;

            for (int i = 0; i < 26; i++) {
                links[i] = nullptr;
            }
        }

        bool contains(char ch) {
            return links[ch - 'a'] != nullptr;
        }

        void put(char ch, Node* newNode) {
            links[ch - 'a'] = newNode;
        }

        Node* get(char ch) {
            return links[ch - 'a'];
        }

        void setEnd() {
            flag = true;
        }

        bool isEnd() {
            return flag;
        }
    };

    Node* root;

    bool searchHelper(const string& word, int idx, Node* node) {
        if (idx == word.length()) {
            return node->isEnd();
        }

        char ch = word[idx];

        if (ch == '.') {
            for (int i = 0; i < 26; i++) {
                if (node->links[i] != nullptr) {
                    if (searchHelper(word, idx + 1, node->links[i])) {
                        return true;
                    }
                }
            }

            return false;
        }

        if (!node->contains(ch)) {
            return false;
        }

        return searchHelper(word, idx + 1, node->get(ch));
    }

public:
    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node* node = root;

        for (char ch : word) {
            if (!node->contains(ch)) {
                node->put(ch, new Node());
            }

            node = node->get(ch);
        }

        node->setEnd();
    }

    bool search(string word) {
        return searchHelper(word, 0, root);
    }
};
/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
