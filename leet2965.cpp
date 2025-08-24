class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> resultVector;
        int n = grid.size();
        int m = n*n;
        int missingNumber, repeatedNumber;
        vector<int> hash(m+1, 0);
        for(int i = 0; i<n; ++i)
        {
            for(int j = 0; j<n; ++j)
            {
                hash[grid[i][j]]++;
            }
        }
        for(int i = 1; i<=m; ++i)
        {
            if(hash[i] == 0)
            {
                missingNumber = i;
            }
            else if(hash[i] > 1)
            {
                repeatedNumber = i;
            }
        }
        resultVector.push_back(repeatedNumber);
        resultVector.push_back(missingNumber);
        return resultVector;
    }
};