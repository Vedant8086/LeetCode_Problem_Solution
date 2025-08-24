class Solution {
public:
    bool isUgly(int n) {
        if(n == 1) return true;
        if(n == 0) return false;
        int num = n;
        while(n!= 0 && n != 1) {

            if(n % 2 == 0) {
                n = n / 2;
            }
            else if(n%3 == 0) {
                n = n /3;
            }
            else if(n%5==0) {
                n = n / 5;
            }

            if(n == num) return false;

            num = n;

        }

        return true;

    }
};