class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        priority_queue<int ,vector<int>, greater<int>> g(nums.begin(),nums.end());
        for(int i = 0;i < k;i++) {
            int t = g.top();
            auto it = find(nums.begin(),nums.end(),t);
            t *= m;
            g.pop();
            g.push(t);
            nums[distance(nums.begin(),it)] = t;
        }

        return nums;
    }
};