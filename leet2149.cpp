class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0,r = 1;
        
        for (int num: nums) {
            if (num < 0) {
                ans[r] = num;
                r += 2;
            }
            else {
                ans[l] = num;
                l += 2;
            }
        }
        return ans;
    }
};