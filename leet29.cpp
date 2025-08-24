class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a = dividend;
        long long b = divisor;
        if(a == INT_MIN && b == -1) return INT_MAX;
        int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
        a = abs(a);
        b = abs(b);

        long long q = 0;
        for(int i = 31;i>=0;--i) {
            if ((b << i) <= a) {
            a -= (b << i);
            q |= (1LL << i);
        }
        }

        return (q * sign);
    }
};