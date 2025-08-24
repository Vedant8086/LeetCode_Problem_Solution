class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int l = 0;
        int count = 1;
        vector<char> anss;
        for(int r = 1; r < chars.size();r++) {
            if(chars[l] == chars[r]) {
                count++;
            }
            else if(chars[l] != chars[r]) {
                if(count == 1) {
                    ans += chars[l];
                    count = 1;
                }
                else {
                    ans += chars[l];
                    ans += to_string(count);
                    count = 1;
                }
                l = r;
            }
        }
        if(count > 1) {
            ans += chars[l];
            ans += to_string(count);
        }
        else {
            ans += chars[l];
        }
        for(auto x : ans) {
            anss.push_back(x);
        }
        chars.clear();
        chars = anss;
        return ans.length();

       

    }
};