class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int i =0;
        map<char,string> mm;
        for(auto x : morse) {
            mm[char(i+97)] = x;
            i++;
        }
        map<string,int> ms;
        for(auto x : words) {
            string ans = "";
            for(auto c : x) {
                ans += mm[c];
            }
            ms[ans]++;
        }

        return ms.size();

    }
};