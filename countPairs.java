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
    private int result=0;
    public int countPairs(TreeNode root, int distance) {
        deepDive(root,distance);
        return result;
    }
    public List<Integer> deepDive(TreeNode node, int d){
        if(node==null) return new ArrayList<>();
        if(node.left==null && node.right==null){
            List<Integer> temp=new ArrayList<>();
            temp.add(1);
            return temp;
        }
        List<Integer> left=deepDive(node.left,d);
        List<Integer> right=deepDive(node.right,d);
        for(int l:left){
            for(int r :right){
                if(l+r<=d) result++; 
            }
        }
        List<Integer> level=new ArrayList<>();
        for(int l : left) if(l+1<=d) level.add(l+1);
        for(int r:right) if(r+1<=d) level.add(r+1);
        return level;
    }
}
