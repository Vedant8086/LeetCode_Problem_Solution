class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int n1 = n,sizes = rolls.size();
        int count,sum =0;
        vector<int> ans;
        for(int i = 0;i < sizes;i++) {
            sum += rolls[i];
        }

        count = ((n + sizes) * mean) - sum;
        if(count > 0) {
            for(int i = 1;i <= n;i++) {
                int x = count / n1;
                if(x > 6 || x <= 0) {
                    count = count - 6;
                    ans.push_back(6);
                }
                else {
                    ans.push_back(x);
                    count = count - x;
                }
                n1--;
            }
        }
        if(count != 0) {
            ans.clear();
            return ans;
        }

        return ans;
    }
};