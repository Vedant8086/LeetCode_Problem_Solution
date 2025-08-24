class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string s = strs[0];
        if(strs.size() == 0) return ans;
        for(int i =0;i < s.size();i++) {
            for(int j = 1;j < strs.size();j++) {
                if(s[i] != strs[j][i]) {
                    return ans;
                }
            }
            ans += s[i];
        }

        return ans;
       
    }
};