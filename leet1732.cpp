class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        int temp = 0;
        for(int num : gain) {
            temp += num;
            ans.push_back(temp);
        }
        int maxi = ans[0];
        for(int x : ans) {
            maxi = max(maxi,x);
        }

        return maxi;
    }
};