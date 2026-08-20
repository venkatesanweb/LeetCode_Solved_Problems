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
    TreeNode* curr;
    void help(TreeNode* root){
        if(!root) return;
        help(root->left);
        root->left=nullptr;
        curr->right=root;
        curr=root;

        help(root->right);

    }
public:
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp = new TreeNode(-1);
        curr = temp;
        help(root);
        return temp->right;
    }
    
};
