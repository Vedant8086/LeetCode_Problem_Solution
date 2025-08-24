class Solution {
public:
    int lengthOfLastWord(string s) {
        int sizes = s.length();
        int flag = -1;
        int count = 0;
        for(int i = sizes-1;i >= 0;i--) {
            if(s[i] != ' ') {
                count++;
                flag = 0;
            }

            if(flag  == 0 && s[i] == ' ') break;
        }

        return count;
    }
};