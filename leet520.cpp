class Solution {
public:
    bool detectCapitalUse(string word) {
        int lower = 0;
        int upper = 0;

        for(auto x : word) {
            if(isupper(x)) {
                upper++;
            }else if(islower(x)) {
                lower++;
            }
        }

        if(upper == word.length()) return true;
        if(upper == 1 && lower == word.length()-1 && isupper(word[0])) return true;
        if(lower == word.length()) return true;


        return false;
    }
};