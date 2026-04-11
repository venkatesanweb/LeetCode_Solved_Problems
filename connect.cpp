
class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) {
            return nullptr;
        }

        Node* levelStart = root;

        while (levelStart != nullptr) {
            Node* curr = levelStart;
            Node* dummy = new Node(0);
            Node* prev = dummy;

            while (curr != nullptr) {
                if (curr->left != nullptr) {
                    prev->next = curr->left;
                    prev = prev->next;
                }

                if (curr->right != nullptr) {
                    prev->next = curr->right;
                    prev = prev->next;
                }

                curr = curr->next;
            }

            levelStart = dummy->next; 
            delete dummy;
        }

        return root;
    }
};
