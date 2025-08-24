class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int m = n;
        int i = 0;
        while(nums.size() != 1) {
            nums[i] = (nums[i] + nums[i + 1]) % 10;
            i++;
            if(i == m - 1) {
                i = 0;
                nums.pop_back();
                m = nums.size();
            }
        }

        return nums[0];
    }
};