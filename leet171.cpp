class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer = 0;
        for(auto i : columnTitle) {
            int n = i - 'A' + 1;
            answer = answer * 26 + n;

        }

        return answer;
    }
};