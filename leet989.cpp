class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int n = num.size();
       vector<int> ans;
       int carry = 0;
       int temp;
       for(int i = n - 1;i >=0;i--) {
            if(k != 0) {
                temp = k % 10;
                k /= 10;
            }
            int x = num[i] + temp + carry;
            carry = 0; 
            if(x >= 10) {
                x = x % 10;
                carry = 1;
            }
            ans.push_back(x);
            temp = 0;
       }
       while(k != 0) {
        int x = k % 10;
        k /= 10;
        int temp = x + carry;
        carry = 0;
        if(temp >= 10) {
            temp %=10;
            carry = 1;
        }
        ans.push_back(temp);
       }
        if(carry == 1) ans.push_back(carry);
       reverse(ans.begin(),ans.end());
       return ans;
    }
};