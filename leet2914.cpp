class Solution {
public:
    int minChanges(string s) {
        int change_count = 0;
        for (int i = 0; i < s.size() - 1; i += 2) {
            if (s[i] != s[i + 1]) {
                change_count++;
            }
        }
        return change_count;
}
};


