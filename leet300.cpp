class Solution {
        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";
        map<char,int> m1,m2,m3;
    bool isInS1(string x) {
        for(auto i : x) {
            if(m1[i] == 0) return false;
        }
        return true;
    }
    bool isInS2(string x) {
        for(auto i : x) {
            if(m2[i] == 0) return false;
        }
        return true;
    }
    bool isInS3(string x) {
        for(auto i : x) {
            if(m3[i] == 0) return false;
        }
        return true;
    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> answer;
        for(auto i : s1) {
            m1[i]++;
        }
        for(auto i : s2) {
            m2[i]++;
        }
        for(auto i : s3) {
            m3[i]++;
        }
        for(auto i : words) {
            if(isInS1(i)) {
                answer.push_back(i);
            } else if(isInS2(i)) {
                answer.push_back(i);
            } else if(isInS3(i)) {
                answer.push_back(i);
            }
        }

        return answer;
    }
};