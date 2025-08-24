class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> m;
        for(int x : nums) {
            m[x]++;
        }

        for(auto i :m) {
            if(i.second > 2 || i.second == 2) {
                ans.push_back(i.first);
                ans.push_back(i.first);
            }
            if(i.second == 1) {
                ans.push_back(i.first);
            }
        }

        nums = ans;

        return nums.size();
    }
};