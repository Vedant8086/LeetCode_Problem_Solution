class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> x = nums;
        map<int,int> m;
        sort(x.begin(),x.end());
        for(auto i : x) {
            m[i] = -1;
        }
        for(int i = 0;i < x.size();i++) {
            if(m[x[i]] == -1)  m[x[i]] = i;
        }

        x.clear();
        for(int i = 0;i < nums.size();i++) {
            x.push_back(m[nums[i]]);
        }

        return x;
    }
};