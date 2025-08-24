class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> s;
        int i = 1;
        s.push(nums[0]);
        while(i < nums.size()) {
            if(s.empty()) {
                s.push(nums[i]);
                i++;
            }
            else if(s.top() > 0 && nums[i] < 0) {
                int x = abs(nums[i]);
                if(s.top() > x) {
                    i++;
                    continue;
                }else if(s.top() < x) {
                    s.pop();
                    continue;
                } else {
                    s.pop();
                    i++;
                    continue;
                }
            }
            // else if(s.top() < 0 && nums[i] > 0) {
            //     int x = abs(s.top());
            //     if(nums[i] > x) {
            //         s.pop();
            //         i++;
            //         continue;
            //     }else if(nums[i] < x) {
            //         i++;
            //         continue;
            //     } else {
            //         s.pop();
            //         i++;
            //         continue;
            //     }
            // }
            else {
                s.push(nums[i]);
                i++;
            }
        }
        vector<int> ans(s.size());
        for(int i = s.size()-1;i>=0;i--) {
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }
};