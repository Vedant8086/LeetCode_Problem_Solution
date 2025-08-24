class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int words = 0;
        int arr[26] = { 0 };
        bool spaces = true;
        for(char c : brokenLetters) {
            arr[((int)(c) - 97)] = 1;
        }

        for(char c : text) {
            if(c != ' ') {
                if(spaces && arr[(int)(c) - 97] != 1) {
                    spaces = true;
                }
                else {
                    spaces = false;
                }
            }
            if(c == ' ') {
                if(spaces) {
                    words++;
                }
                else {
                    spaces = true;
                }
            }
        }
        if(spaces) words++;

        return words;
    }
};