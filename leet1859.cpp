class Solution {
public:
    string sortSentence(string s) {
        map<int,string> m;
        string x = "";
        for(auto i : s) {
            if(i == ' ') {
                string m1 = x.substr(0,x.length()-1);
                int r = x[x.size()-1] - '0';
                m[r] = m1;
                x = "";
            } else {
                x += i;
            }
        }
        string m1 = x.substr(0,x.length()-1);
        int r = x[x.size()-1] - '0';
        m[r] = m1;

        string ans = "";
        for(auto i : m) {
            ans += i.second;
            ans += ' ';
        }

        return ans.substr(0,ans.length()-1);
    }
};