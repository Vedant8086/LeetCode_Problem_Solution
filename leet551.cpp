class Solution {
public:
    bool checkRecord(string s) {
        int A_count = 0;
        int L_count = 0;
        for(int i = 0;i < s.length()-1;i++) {
            if(s[i] == 'A') A_count++;

            if(s[i] == 'L' && s[i+1] == 'L') L_count++;
            else if(L_count < 2) L_count = 0;
        }
        if(s[s.length()-1] == 'A') A_count++;
        if(L_count > 0) L_count++;

        if(A_count < 2 && L_count < 3) {
            return true;
        }

        return false;
    }
};