class Solution {
    public int[][] transpose(int[][] matrix) {
        int tran[][] = new int[matrix[0].length][matrix.length];
        for(int i = 0;i < tran.length;i++) {
            for(int j = 0;j < tran[0].length;j++) {
                tran[i][j] = matrix[j][i];
            }
        }

        return tran;
    }
}