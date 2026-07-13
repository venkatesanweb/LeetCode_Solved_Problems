class Solution {
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        if (inorder == null || postorder == null ||
            inorder.length == 0 || postorder.length == 0)
            return null;
        int iIndex = inorder.length - 1;
        int pIndex = postorder.length - 1;
        Stack<TreeNode> stack = new Stack<>();
        TreeNode root = new TreeNode(postorder[pIndex--]);
        stack.push(root);
        while (pIndex >= 0) {
            TreeNode node = stack.peek();
            if (node.val != inorder[iIndex]) {
                TreeNode right = new TreeNode(postorder[pIndex--]);
                node.right = right;
                stack.push(right);
            } else {
                while (!stack.isEmpty() && stack.peek().val == inorder[iIndex]) {
                    node = stack.pop();
                    iIndex--;
                }
                if (pIndex >= 0) {
                    TreeNode left = new TreeNode(postorder[pIndex--]);
                    node.left = left;
                    stack.push(left);
                }
            }
        }
        return root;
    }
}
