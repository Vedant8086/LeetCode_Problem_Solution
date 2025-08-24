class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        int x = 0;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int i = 0;
        while(i < s.length()) {
            if(m[s[i]] < m[s[i+1]]) {
                x += (m[s[i+1]] - m[s[i]]);
                i++;
            } else {
                x += m[s[i]];
            }
            i++;
        }

        return x;
    }
};