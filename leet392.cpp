class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(auto x : t) {
            if(i < s.length()) {
                if(x == s[i]) {
                    i++;
                }
            }
        }
        if(i == s.length()) {
            return true;
        }

        return false;

    }
};