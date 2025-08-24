class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> m;
        int count = 0;

        for(int i = 0;i < grid.size();i++) {
            m[grid[i]]++;
        }

        for(int i = 0;i < grid[0].size();i++) {
            vector<int> v;
            for(int j=0;j < grid.size();j++) {
                v.push_back(grid[j][i]);
            }
            count += m[v];
        }

        return count;
    }
};