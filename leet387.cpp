class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26,0);
        for(auto x : s) {
            arr[(int)(x) - 97] += 1;
        }
        for(int i = 0;i < s.length();i++) {
            if(arr[(int)(s[i]) - 97] == 1) {
                return i;
                break;
            }
        }
        return -1;
    }
};