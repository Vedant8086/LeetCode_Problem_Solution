class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int i = 0;i < nums.size();i++) {
            if(nums[i] == val) {
                continue;
            }
            else {
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
        return nums.size();
    }
};