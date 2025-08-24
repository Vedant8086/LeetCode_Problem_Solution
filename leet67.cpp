class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 && j >= 0) {
            int val1 = a[i] - '0';
            int val2 = b[j] - '0';
            int temp = val1 + val2 + carry;
            carry = 0;
            if(temp == 2)  {
                temp = 0;
                carry = 1;
            } else if(temp == 3) {
                temp = 1;
                carry = 1;
            }
            ans = to_string(temp) + ans;
            i--;
            j--;
        }

        while(i >= 0) {
            int val1 = a[i] - '0';
            int temp = val1 + carry;
            carry = 0;
            if(temp == 2) {
                temp = 0;
                carry = 1;
            } else if(temp == 3) {
                temp = 1;
                carry = 1;
            }
            ans = to_string(temp) + ans;
            i--;
        }

        while(j >= 0) {
            int val1 = b[j] - '0';
            int temp = val1 + carry;
            carry = 0;
            if(temp == 2) {
                temp = 0;
                carry = 1;
            } else if(temp == 3) {
                temp = 1;
                carry = 1;
            }
            ans = to_string(temp) + ans;
            j--;
        }
        if(carry == 1) {
            ans = to_string(carry) + ans;
        }
        return ans;
    }
};