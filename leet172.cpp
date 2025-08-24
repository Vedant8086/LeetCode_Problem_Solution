class Solution {
public:
    int trailingZeroes(int n) {
        if(n < 5) {
            return 0;
        }
        int count = 0;
        int x = 5;
        while(x <= n) {
            count += floor(n / x);
            x = x * 5;
        }

        return count;
    }
};