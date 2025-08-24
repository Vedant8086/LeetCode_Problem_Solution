class Solution {
public:
    string reverseWords(string s) {
        vector<string> sx;
        int flag = 0;
        string x ="";
        for(int i = 0;i < s.length();i++) {
            if(s[i] != ' ') {
                x += s[i];
                flag = 1;
            } 
            else if(flag == 1) {
                sx.push_back(x);
                x = "";
                flag = 0;
            }
        }
        if(flag == 1) sx.push_back(x);
        int n = sx.size();
        string ans = "";
        for(int i = 0;i < n;i++) {
            ans += sx[n-i-1];
            if(i != n - 1) {
                ans+= ' ';
            }
        }

        return ans;
    }
};