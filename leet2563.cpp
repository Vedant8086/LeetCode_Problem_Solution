class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        long long count = 0;
        sort(nums.begin(),nums.end());

        for(int i = 0;i < n;i++) {
            int l=i+1;
            auto lx = lower_bound(nums.begin()+l,nums.end(),lower-nums[i]) - nums.begin();
            auto rx = upper_bound(nums.begin()+l,nums.end(),upper-nums[i]) - nums.begin();
            count += (rx - lx);
        }

        return count;
    }
};