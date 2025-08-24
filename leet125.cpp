class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char x : s) {
            x =tolower(x);
            
            if((x >= 97 && x <= 122) || (x >= 48 && x <= 57)) {
                ans += x;
            }
        }
        string x1 = ans;
        reverse(ans.begin(),ans.end());

        if(x1 == ans) return true;

        return false;



    }
};