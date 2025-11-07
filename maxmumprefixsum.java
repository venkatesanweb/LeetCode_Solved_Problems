class Solution {
    public int maxSumSubmatrix(int[][] matrix, int k) {
        int row = matrix.length;
        int cols = matrix[0].length;
        int ans = Integer.MIN_VALUE;

        for (int l = 0; l < cols; l++) {
            int prefix[] = new int[row];
            for (int r = l; r < cols; r++) {
                for (int ro = 0; ro < row; ro++) {
                    prefix[ro] += matrix[ro][r];
                }

                TreeSet<Integer> cumm = new TreeSet<>();
                cumm.add(0);
                int cj = 0;
                for (int i = 0; i < row; i++) {
                    cj += prefix[i];
                    Integer ci = cumm.ceiling(cj - k);
                    if (ci != null) {
                        ans = Math.max(ans, cj - ci);
                    }
                    cumm.add(cj);
                }
            }
        }
        return ans;
    }
}
