class Solution {
public:
    int tribonacci(int n) {
       vector<int> a;
       a.push_back(0);
       a.push_back(1);
       a.push_back(1);
        int pointer = 0;
       for(int i = 1;i <= n-2;i++) {
            int sum = a[pointer] + a[pointer + 1] + a[pointer + 2];
            pointer++;
            a.push_back(sum);
        }

        return a[n];

    }
};