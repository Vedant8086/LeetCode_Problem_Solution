class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int carry = 0;
        digits[n -1] += 1;
        for(int i = n - 1;i >=0;i--) {

            if((digits[i] + carry) % 10 == 0 && digits[i] != 0) {
                carry = 1;
                ans.push_back(0);
            }
            else {
                ans.push_back(digits[i] + carry);
                carry = 0;
            }
        }
        if(carry == 1) {
            ans.push_back(1);
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};