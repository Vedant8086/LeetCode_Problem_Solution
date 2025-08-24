class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int len = nums.size();
        vector<int> hashs(nums.size(),0);

        for(int i =0;i < nums.size();i++) {
            hashs[nums[i]-1]++;
        }

        for(int i = 0;i < nums.size();i++) {
            if(hashs[i] == 0) {
                ans.push_back(i+1);
            }
        }

        return ans;

    }
};