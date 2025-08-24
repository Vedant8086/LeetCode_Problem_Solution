class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = max(word1.length(),word2.length());
        string ans = "";
        int x = 0,y = 0;
        while(x < l && y < l) {
            if(x < word1.length()) {
                ans += word1[x];
                x++;
            }
            if(y < word2.length()) {
                ans+=word2[y];
                y++;
            }
        }

        return ans;
    }
};