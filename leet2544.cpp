class Solution {
public:
    int alternateDigitSum(int n) {
        string x = to_string(n);
        int sum = 0;
        int k = 0;
        for(auto i : x) {
            if(k % 2 == 0) sum += (i - '0');
            else sum -= (i - '0');
            k++;
        }

        return sum;
    }
};