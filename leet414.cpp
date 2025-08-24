class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s(nums.begin(),nums.end());
        vector<int> num(s.begin(),s.end());

        if(num.size() <=2 ) {
            return num[num.size()-1];
        }

        else {
            return num[num.size()-3];
        }

        

        return -1;
    }
};