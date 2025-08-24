class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> rightMax(n);
        rightMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], nums[i]);
        }

        int i = 0, j = 0, maxRamp = 0;
        while (i < n && j < n) {
            if (nums[i] <= rightMax[j]) {
                maxRamp = max(maxRamp, j - i);
                j++;
            } else {
                i++;
            }
        }
        return maxRamp;
    }
};