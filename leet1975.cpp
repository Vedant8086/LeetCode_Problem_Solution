class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;
        int negativeCount = 0;
        int minAbs = INT_MAX;
        for(auto row : matrix) {
            for(auto val : row) {
                totalSum += abs(val);
                if(val < 0) {
                    negativeCount++;
                }
                minAbs = min(minAbs,abs(val));
            }
        }

        if(negativeCount % 2 != 0) {
            totalSum -= 2 * minAbs;
        }

        return totalSum;
    }
};