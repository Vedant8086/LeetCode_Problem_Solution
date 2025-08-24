class Solution {
public:
    string reverseVowels(string s1) {
        vector<char> s;
        for(int i = 0;i < s1.length();i++) {
            if(s1[i] == 'a' || s1[i] == 'e' ||s1[i] == 'i' || s1[i] == 'o' ||s1[i] == 'u') {
                s.push_back(s1[i]);
            } 

            if(s1[i] == 'A' || s1[i] == 'E' ||s1[i] == 'I' || s1[i] == 'O' ||s1[i] == 'U') {
                s.push_back(s1[i]);
            }
        }
        int n = s.size();
        for(int i = 0;i < s1.length();i++) {
            if(s1[i] == 'a' || s1[i] == 'e' ||s1[i] == 'i' || s1[i] == 'o' ||s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' ||s1[i] == 'I' || s1[i] == 'O' ||s1[i] == 'U') {
                s1[i] = s[n-1];
                n--;
            } 
        }

        return s1;
    }
};