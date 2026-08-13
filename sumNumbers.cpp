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
    int leftsum=0;
    int rightsum=0;
    int dfs(TreeNode* root,int sum){
        if(root==nullptr) return 0;
        sum=sum*10+root->val;
        if(root->left==nullptr && root->right==nullptr) return sum;
        int left = dfs(root->left,sum);
        int right = dfs(root->right,sum);
        return left+right;
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
    }
};
