class Solution {
    map<char,int> m;
    bool isTrue(string x) {
        for(auto i : x) {
            if(m[i] == 0) return false;
        }

        return true;
    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        for(auto i : allowed) {
            m[i]++;
        }
        int count = 0;
        for(int i = 0;i < words.size();i++) {
            if(isTrue(words[i])) {
                count++;
            }
        }

        return count;
    }
};