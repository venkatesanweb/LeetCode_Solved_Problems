/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int maxilen =-1;
    int ans =0;
    public int findBottomLeftValue(TreeNode root) {
        help(root,0);
        return ans;
    }
    public void help(TreeNode root,int level){
        if(root==null) return;
        if(level>maxilen){
            maxilen=level;
            ans=root.val;
        }
        help(root.left,level+1);
        help(root.right,level+1);
    }
}
