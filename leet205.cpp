class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        for(int i = 0; i < s.length();i++) {
            if(m1[s[i]] == 0) {
                m1[s[i]] = i+1;
            }
            if(m2[t[i]] == 0) {
                m2[t[i]] = i+1;
            }
        }
        string x = "";
        string y = "";
        for(int i = 0; i < s.length();i++) {
            x += m1[s[i]];
            y += m2[t[i]];
        }

        if(x == y) return true;
        return false;        


    }
};