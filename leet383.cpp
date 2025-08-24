class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> x1(26,0),x2(26,0);
        for(auto x : ransomNote) {
            x1[(int)(x) - 97]++;
        }
        for(auto x : magazine) {
            x2[(int)(x) - 97]++;
        }
        for(int i =0;i < 26;i++) {
            if(x1[i] > x2[i]) {
                return false;
            }
        }

        return true;
    }
};