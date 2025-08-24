class Solution {
public:
    string toLowerCase(string s) {
        string s1 = "";
        for(auto x : s) {
            s1+= tolower(x);
        }

        return s1;
    }
};