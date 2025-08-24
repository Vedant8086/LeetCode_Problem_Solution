class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size() == 1) return nums[0];
        double i =0;
        double j = k-1;
        double maxi = INT_MIN;
        double sum = 0;
        for(int x = i;x <= j;x++) {
            sum += nums[x];
        }
        maxi = max(maxi, sum);
        while(j < nums.size()) {
            sum -= nums[i];
            i++;
            j++;
            sum += nums[j];
            maxi = max(maxi, sum);
        }


        return maxi / double (k);
    }
};