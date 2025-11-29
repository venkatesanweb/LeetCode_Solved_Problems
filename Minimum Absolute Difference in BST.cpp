/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> vc;
        collectValues(root, vc);

        sort(vc.begin(), vc.end());

        int ans = INT_MAX;
        for (int i = 1; i < vc.size(); i++) {
            ans = min(ans, vc[i] - vc[i - 1]);
        }
        return ans;
    }

    void collectValues(TreeNode* root, vector<int>& vc) {
        if (root == NULL) {
            return;
        }
        vc.push_back(root->val);
        collectValues(root->left, vc);
        collectValues(root->right, vc);
    }
};
