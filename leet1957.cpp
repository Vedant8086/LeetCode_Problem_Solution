class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int i = 0;
        int count = 1;
        while(i < s.length()) {
            if(s[i] == s[i+1]) {
                count++;
            } 
            else if(s[i] != s[i+1]){
                if(count >= 2) {
                    ans += s[i];
                    ans += s[i];
                    count = 1;
                } else {
                    ans += s[i]; 
                }
            }
            i++;
        }
        return ans;
    }
};