class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int n = nums.size();
        for(int i = 1;i < n;i++) {
            nums[i] += nums[i-1];
        }
        int m = nums[n - 1];
        int sum = 0;
        for(int i = 0;i < n;i++) {
            if(sum == (m - nums[i])) {
                return i;
            }
            sum = nums[i];
        }


        return -1;
    }
};