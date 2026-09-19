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
    int height(TreeNode* r){
        if(r==NULL) return 0;
        return max(height(r->right),height(r->left))+1;
    }
    void lvt(int l,TreeNode* root,vector<stack<int>>& x){
        if(root==NULL) return;
        if(l%2==1) x[l].push(root->val);
        lvt(l+1,root->left,x);
        lvt(l+1,root->right,x);
    }
    void lvt2(int l,TreeNode* r,vector<stack<int>>& x){
        if(r==NULL) return;
        if(l%2==1){
            r->val=x[l].top();
            x[l].pop();
        }
        lvt2(l+1,r->left,x);
        lvt2(l+1,r->right,x);
    }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        int h=height(root);
        vector<stack<int>> x(h,stack<int>());
        lvt(0,root,x);
        lvt2(0,root,x);
        return root;
    }
};
