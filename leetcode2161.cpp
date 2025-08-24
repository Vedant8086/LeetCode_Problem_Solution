class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> x1,x2,x3;
        for(auto i : nums) {
            if(i < pivot) {
                x1.push_back(i);
            } else if(i == pivot) {
                x2.push_back(i);
            } else {
                x3.push_back(i);
            }
        }

        vector<int> ans;

        ans = x1;

        ans.insert(ans.end(),x2.begin(),x2.end());
        ans.insert(ans.end(),x3.begin(),x3.end());
        

        return ans;
    }
};