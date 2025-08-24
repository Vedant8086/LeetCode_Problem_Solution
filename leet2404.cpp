class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        for(int i =0;i < nums.size();i++) {
            if(nums[i] % 2 == 0) {
                m[nums[i]]++;
            }
        }
        int maxi = 0;
        int el = -1;
        for(auto& x : m) {
           if(x.second > maxi) {
                maxi = x.second;
                el = x.first;
           }
           else if(x.second == maxi) {
                el = min(x.first,el);
           }
        }

        return el;
    }
};