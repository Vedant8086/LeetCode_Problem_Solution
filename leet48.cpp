class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans(matrix.size(),vector<int>(matrix[0].size()));
        int n = matrix.size()-1;
        int m = matrix[0].size()-1;
        for(int i = 0;i <= n;i++) {
            for(int j = 0;j <= m;j++) {
                ans[j][n - i] = matrix[i][j];
            }
        }
        matrix = ans;
        return;
    }
};