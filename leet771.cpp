class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        map<char,int> m;
        for(auto i : stones) {
            m[i]++;
        }
        for(auto i : jewels) {
            count += m[i];
        }

        return count;
    }
};