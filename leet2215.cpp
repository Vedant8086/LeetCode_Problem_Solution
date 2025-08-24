class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> level;
        map<int,int> m;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        for(auto i : s1) {
            m[i]++;
        }
        for(auto x : s2) {
            if(m[x] != 1) {
                level.push_back(x);
            }
        }
        ans.push_back(level);
        level.clear();
        m.clear();

        for(auto x : s2) {
            m[x]++;
        }
        for(auto x : s1) {
            if(m[x] != 1) {
                level.push_back(x);
            }
        }
        ans.push_back(level);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};