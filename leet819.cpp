class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string ans = "";
        vector<string> words;
        // int flag = 1
        for(auto p : paragraph) {
            if(ans.length() != 0 && p == ' ' || p == ',' || p == '.' || p == '!' || p == '?' || p == '\'') {
                words.push_back(ans);
                ans = "";
            } else if(int(tolower(p)) >=97 && int(tolower(p)) <=122){
                ans += tolower(p);
            }
        }
        if(ans.length() != 0) words.push_back(ans);
        map<string,int> m;
        for(auto p : words) {
            m[p]++;
        }
        map<string,int> n;
        for(auto xc : banned) {
            n[xc]++;
        }
        string as;
        int tc = INT_MIN;
        for(auto mk : m) {
            if(mk.second >= tc && n[mk.first] == 0) {
                tc = mk.second;
                as = mk.first;
            }
        }


        return as;

    }
};