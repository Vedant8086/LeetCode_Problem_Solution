class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 0) return ans;
        int number = nums[0];
        int i = 0;
        for(i = 0;i < nums.size()-1;i++) {
            unsigned int x1 = nums[i+1];
            unsigned int x2 = nums[i];
            if(x1 - x2 > 1) {
                if(number == nums[i]) ans.push_back(to_string(number));
                else {
                   ans.push_back(to_string(number)+"->"+to_string(nums[i]));
                }
                number = nums[i+1];
            } 
        }
         if(number == nums[i]) ans.push_back(to_string(number));
        else {
            ans.push_back(to_string(number)+"->"+to_string(nums[i]));
        }
        return ans;
    }
};