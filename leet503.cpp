class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> s;
        int n = nums.size();
        bool flag = true;
        for(int i = 0;i < n;i++) {
            while(!s.empty() && nums[s.top()] < nums[i]) {
                int el = s.top();
                s.pop();
                ans[el] = nums[i];
            }
            s.push(i);
        }
        for(int i = 0;i < n;i++) {
            while(!s.empty() && nums[s.top()] < nums[i]) {
                int el = s.top();
                s.pop();
                ans[el] = nums[i];
            }
            // s.push(i);
        }

        return ans;
    }
};