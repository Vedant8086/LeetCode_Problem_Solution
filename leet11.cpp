class Solution {
public:
    int maxArea(vector<int>& num) {
        int maxArea = 0;
        int l = 0;
        int r = num.size() - 1;
        while(l < r) {
            maxArea = max(maxArea,((r - l) * min(num[l],num[r])));
            if(num[l] < num[r]) {
                l++;
            } else {
                r--;
            }
        }

        return maxArea;
    }
};