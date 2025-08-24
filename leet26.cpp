class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int x : nums) {
            m[x]++;
        }
        vector<int> ans;
        for(auto i : m) {
            ans.push_back(i.first);
        }
        nums=ans;
        return m.size();
    }
};