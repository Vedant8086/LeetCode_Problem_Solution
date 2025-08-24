class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        for(int i = 1;i < nums.size();i++) {
            nums[i] += nums[i- 1];
        }

        int left = 0,right = nums.size()-1;
        for(int i = 0;i < nums.size();i++) {
            int x = nums[right] - nums[i];
            if(left == x) {
                return i;
            }
            left = nums[i];
        }


        return -1;
    }
};