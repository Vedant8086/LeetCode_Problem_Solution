class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        vector<int> ans;
        for(int i = 1;i < nums.size();i++) {
            int maxi = nums[i];
            for(int j = i+1;j < nums.size();j++) {
                maxi = max(nums[j],maxi);
            }
            ans.push_back(maxi);
        }

        ans.push_back(-1);
        return ans;
    }
};