class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string x1 = "";
        string x2;
        string x3 = "";
        stringstream ss(s);
        map<char,int> m1;
        map<string,int> m2;
        int l = 1;
        for(int i = 0;i < pattern.length();i++) {
            if(m1[pattern[i]] == 0) {
                m1[pattern[i]] = l;
                x1 += to_string(m1[pattern[i]]);
                l++;
            } else {
                x1 += to_string(m1[pattern[i]]);
            }
        }
        l = 1;
        while(ss >> x2) {
            if(m2[x2] == 0) {
                m2[x2] = l;
                x3 += to_string(m2[x2]);
                l++;
            } else {
                x3 += to_string(m2[x2]);
            }
        }
        if(x1 == x3) return true;

        return false;

    }
};