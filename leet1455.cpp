class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> a;
        string x = "";
        for(auto i : sentence) {
            if(i == ' ') {
                a.push_back(x);
                x = "";
            }
            else x += i;
        }
        a.push_back(x);
        int io = 0;
        for(auto i : a) {
            if(i.length() < searchWord.length()) {
                io++;
                continue;
            }
            else if(i.substr(0,searchWord.length()) == searchWord) {
                return io + 1;
            }else io++;
        }

        return -1;
    }
};