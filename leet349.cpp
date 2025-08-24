class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> nums11(nums1.begin(),nums1.end());
        set<int> nums12(nums2.begin(),nums2.end());
        unordered_map<int,int> m;
        for(auto x : nums11) {
            m[x]++;
        }

        for(auto x : nums12) {
            m[x]++;
        }

        for(auto i : m) {
            if(i.second > 1) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};