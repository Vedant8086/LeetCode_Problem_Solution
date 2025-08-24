class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
            vector<int> a;
            int n = mat.size();
        for(int i  = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                a.push_back(mat[i][j]);
            }
        }
        
        
        sort(a.begin(),a.end());
        return a[0 + k-1];

    }
};