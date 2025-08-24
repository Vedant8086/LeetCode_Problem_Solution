class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int index = -1;
        for(int i = 0;i < nums.size();i++) {
            if(nums[i] != maxi && nums[i] * 2 > maxi) {
                return -1;
            }

            if(maxi == nums[i]) index = i;
        }

        return index;
    }
};