class Solution {
public:
    int countSegments(string s) {
        if(s == "") return 0;
        int count = 0;
        int flag = 0;
        for(auto x : s) {
            if(x != ' ') {
                flag = 1;
            }
            else if(x == ' ' && flag == 1) {
                count++;
                flag = 0;
            }
        }
        if(s[s.length()-1] != ' ') {
            count++;
        }
        return count;
    }
};