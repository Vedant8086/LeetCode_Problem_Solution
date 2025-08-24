class Solution {
public:
    string convertToBase7(int num) {
        
        string ans = "";
        while(num != 0) {
            int temp = num % 7;
            ans = to_string(temp) + ans;
            num /= 7;
        }
        if(ans.length() == 0) ans += to_string(0);
        if(ans[0] == '-') {
            string a = "";
            for(int i = 0;i < ans.length();i++) {
                if(ans[i] != '-') {
                    a = a+ans[i];  
                }
            }
            a = '-' + a;
            return a;
        }
        return ans;
    }
};