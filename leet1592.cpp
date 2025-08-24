class Solution {
public:
    string reorderSpaces(string s) {
        if(s.length() == 1) return s;
        string ans = "";
        vector<string> strs;
        string words = "";
        int avg,avg1;
        int count = 0;
        int word = 0;
        int flag = 0;
        for(int i = 0;i < s.length();i++) {
            if(s[i] != ' ') {
                words += s[i];
                flag = 1;
            }
            else if(s[i] == ' ' && flag == 1) {
                word++;
                strs.push_back(words);
                words = "";
                count++;
                flag = 0;
            }
            else {
                count++;
            }
        }

        if(s[s.length()-1] != ' ') {
            strs.push_back(words);
            word++;
        }
        if(word > 1) {
            avg = count / (word - 1);
            avg1 = count % (word - 1);
        }else {
            avg =0;
            avg1 = count;
        }
        
        for(int i = 0;i < strs.size();i++) {
            ans += strs[i];
            if(i != strs.size()-1) {
                for(int h = 1;h <= avg;h++) {
                    ans += ' ';
                }
            }
        }

        for(int i =1; i <=avg1;i++) {
            ans += ' ';
        }
        return ans;
    }
};