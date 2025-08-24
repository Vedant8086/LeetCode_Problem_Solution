class Solution {
public:
    bool isValid(string word) {
        int character = 0;
        int vowels = 0,consonents = 0;
        bool digits = false;
        if(word.length() >= 3) {
            for(char c : word) {
                if((int(c) >= 48 && int(c) <= 57) || (int(c) >= 65 && int(c) <= 90) || (int(c)>=97 && int(c)<= 122)) {
                    digits = true;
                }
                else {
                    digits = false;
                    return false;
                }
                if(c == 'a' ||c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' ||c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    vowels++;
                }
                else if((int(c) >= 65 && int(c) <= 90) || (int(c)>=97 && int(c)<= 122)){
                    consonents++;
                }

            }
            if(digits == true && vowels >= 1 && consonents >=1) {
                return true;
            }
            else {
                return false;
            }

        }
        else return false;
    }
};