class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i < n - 1;i++) {
            int l = i+1,r = n - 1;
            while(l <= r) {
                int mid = l + (r - l) / 2;
                if(nums[i] + nums[mid] == target) {
                    return {i+1,mid+1};
                } else if(nums[i] + nums[mid] > target) {
                    r = mid- 1;
                } else {
                    l = mid + 1;
                }
            }
        } 
        return {-1,-1};
    }
};