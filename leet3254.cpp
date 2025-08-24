class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k == 1) return nums;
        vector<int> res((nums.size() - k) + 1,-1);
        int i = 0;
        int x = -1;
        int maxi = INT_MIN;
        bool opps = false;
        while(i < nums.size()-k + 1) {
            maxi = INT_MIN;
            opps = false;
            for(int x = i;x < i+k-1;x++) {
                if(nums[x] < nums[x+1] && nums[x] + 1 == nums[x + 1]) {
                    opps = true;
                    maxi = max(maxi,nums[x+1]);
                } else {
                    opps = false;
                    break;
                }
            }
            if(opps) res[++x] = maxi;
            else x++;
            i++;
        }



        return res;

    }
};