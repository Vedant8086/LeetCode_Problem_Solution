class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int x : arr) {
            m[x]++;
        }
        map<int,int> s;
        for(auto i : m) {
            s[i.second]++;
        }
        for(auto d : s) {
            if(d.second > 1) {
                return false;
            }
        }

        return true;
        
    }
};