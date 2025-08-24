class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for(char c : s) {
            if(c == '(' || c == '[' || c == '{') {
                par.push(c);
            }
            else {
                if(par.empty()) return false;

                char tops = par.top();
                if((c == ')' && tops != '(') || (c == ']' && tops != '[' || c == '}' && tops != '{')) {
                    return false;
                }

                par.pop();
            }
        }
        return par.empty();
    }
};