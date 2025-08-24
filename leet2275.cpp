class Solution {
public:
    int largestCombination(vector<int>& nums) {
       int n = nums.size();
       int answer = 0;
       for(int i = 0;i < 32;i++) {
        int count = 0;
        for(auto x : nums) {
            if(x & (1 << i)) count++;
        }
        answer = max(answer,count);
       }

       return answer;
    }
};
