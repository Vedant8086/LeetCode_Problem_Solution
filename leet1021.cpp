class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> ss;
        ss.push('(');
        for(int i = 1;i < s.length();i++) {
            if(s[i] == '(' && ss.size() > 0) {
                ss.push('(');
                ans += "(";
            } else if(s[i] == ')' && ss.size() > 0) {
                if(ss.size() == 1) ss.pop();
                else {
                    ans += ")";
                    ss.pop();
                }
            } else if(s[i] == '(' && ss.size() == 0) {
                ss.push('(');
            } else {
                ss.pop();
            }
        }

        return ans;
    }
};