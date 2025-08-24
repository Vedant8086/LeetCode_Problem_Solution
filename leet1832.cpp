class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26,0);
        for(auto i : sentence) {
            ans[i-'a']++;
        }

        for(auto i : ans) {
            if(i == 0) {
                return false;
            }
        }

        return true;
    }
};