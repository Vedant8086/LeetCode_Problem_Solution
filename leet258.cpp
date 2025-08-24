class Solution {
private : 
    int Numbers(int num) {
        int sum = 0;
        while(num != 0) {
            int temp = num % 10;
            sum += temp;
            num = num / 10;
        }
        return sum;
    }
public:
    int addDigits(int num) {
        int sum = 0;
        if(num < 10) {
            return num;
        }
        if(num == 10) return 1;

        while(num >= 10) {
            sum = Numbers(num);
            num = sum;
        }

        return num;
    }
};