class Solution {
public:
    int singleNumber(vector<int>& nums) {
       map<int,int> m;
       for(auto num : nums) {
            m[num]++;
       }

       for(auto i : m) {
        if(i.second == 1) {
            return i.first;
        }
       }


       return -1;

    }
};