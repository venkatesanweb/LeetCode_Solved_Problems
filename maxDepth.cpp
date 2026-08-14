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
    int maxi=0;
    int help(TreeNode* root,int co){
        if(root==nullptr) return 0;
        if(root->left==NULL && root->right==NULL) return co;
        int maxi = max(help(root->left,co+1),help(root->right,co+1));
        return maxi;
    }
    int maxDepth(TreeNode* root) {
        return help(root,1);
    }
};
