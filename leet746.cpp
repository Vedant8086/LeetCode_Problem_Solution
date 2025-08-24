class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int costOfL1 = 0;
        int costOfL2 = 0;
        for(int i=2; i<=n; i++){
            int left1 = cost[i-1] + costOfL1;
            int left2 = cost[i-2] + costOfL2;
            int current = min(left1,left2);
            costOfL2 = costOfL1;
            costOfL1 = current;
        }
        return costOfL1;
    }
};