class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int maxi = pow(2,maximumBit)-1;
        int xors = nums[0];
        for(int i = 1;i < n;i++) {
            xors ^= nums[i];
            nums[i] = xors;
        }
        vector<int> ans(n,0);
        for(int i = 0;i < n;i++) {
            ans[i] = nums[n - 1 - i] ^ maxi;
        }

        return ans;

    }
};