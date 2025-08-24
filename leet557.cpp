class Solution {
public:
    string reverseWords(string s) {
        string x = "";
        string ans = "";
        for(auto i : s) {
            if(i == ' ') {
                reverse(x.begin(),x.end());
                ans += x;
                ans += ' ';
                x = "";
            } else {
                x += i;
            }
        }

        reverse(x.begin(),x.end());
        ans += x;
        return ans;
    }
};