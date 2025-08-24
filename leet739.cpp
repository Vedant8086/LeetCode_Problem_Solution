class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i = 0;i < n;i++) {
            while(!s.empty() && arr[s.top()] < arr[i]) {
                int idx = s.top();
                s.pop();
                ans[idx] = i - idx;
            }
            s.push(i);
        }

        return ans;
    }
};