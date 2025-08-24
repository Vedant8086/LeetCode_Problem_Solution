class Solution {
public:
    int arrangeCoins(int n) {
       int i = 1;
       long long sum = 0;
       int j = 0;
       while(sum <= n) {
        sum+= i;
        j++;
        i++;
       }
       return --j;
    }
};