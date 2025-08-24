class Solution {
public:
    string clearDigits(string s) {
        stack<char> chars;
        for(int i = 0; i < s.length();i++) {
            if(s[i] - '0' >= 0 && s[i]-'0' <= 9) {
                chars.pop();
            } else {
                chars.push(s[i]);
            }
        }
        string ans = "";
        int n = chars.size();
        for(int i = 0;i < n;i++) {
            ans += chars.top();
            chars.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};