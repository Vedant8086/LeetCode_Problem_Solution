class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string,int> m;
        string x = ""; 
        for(auto i : s1) {
            if(i == ' ') {
                m[x]++;
                x="";
            }else x += i;
        }
        m[x]++;
        x = "";
        for(auto i : s2) {
            if(i == ' ') {
                m[x]++;
                x="";
            } else x += i;
        }
        m[x]++;
        for(auto i : m) {
            if(i.second == 1) {
                ans.push_back(i.first);
            }
        }


        return ans;
    }
};