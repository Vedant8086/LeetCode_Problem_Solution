class Solution {
public:
    bool isCircularSentence(string s) {
        vector<char> x;
        x.push_back(s[0]);
        x.push_back(s[s.length() - 1]);
        for(int i = 1;i < s.length() - 1;i++) {
            if(s[i] == ' ') {
                x.push_back(s[i - 1]);
                x.push_back(s[i+1]);
                i++;
            }
        }
        int i = 0;
        while(i < x.size()) {
            if(x[i] != x[i+1]) return false;
            i++;i++;
        }
        return true;
    }
};