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
    public int kthSmallest(TreeNode root, int k) {
        List<Integer> pq = new ArrayList<>();
        help(root,pq);
        return pq.get(k-1);
    }
    private void help(TreeNode root,List<Integer> lis){
        if(root==null) return;
        help(root.left,lis);
        lis.add(root.val);
        help(root.right,lis);
    }
}
