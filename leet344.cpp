class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans(s.rbegin(),s.rend());
        s.clear();
        s = ans;
    }
};