class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi = candies[0];
        for(int i =1;i < candies.size();i++) {
            if(candies[i] >= maxi) maxi = candies[i];
        }

        for(int i = 0;i < candies.size();i++) {
            if(candies[i] + extraCandies >= maxi) {
                ans.push_back(true);
            } else {
                ans.push_back(false);

            }
        }
        return ans;
    }
};