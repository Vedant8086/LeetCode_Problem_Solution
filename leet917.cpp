class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans = "";
        string x = "";
        for(int i = s.length()-1;i>=0;i--) {
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90)) {
                ans += s[i];
            }
        }
        int i = 0;
        int j = 0;
        while(i < s.length()) {
            if(!(s[i] >= 97 && s[i] <= 122) && !(s[i] >= 65 && s[i] <= 90)) {
                x += s[i];
            } else {
                x += ans[j];
                j++;
            }
            i++;
        }
        return x;
    }
};