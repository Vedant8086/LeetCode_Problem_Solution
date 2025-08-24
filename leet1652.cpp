class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> a(n,0);
        if(k == 0) return a;
        int l = 1,r = k,sum = 0;
        if(k < 0) {
            l = n - abs(k);
            r = n - 1;
        }

        for(int i = l;i <= r;i++) {
            sum += code[i];
        }

        for(int i = 0;i < n;i++) {
            a[i] = sum;
            sum -= code[l % n];
            sum += code[(r + 1) % n];
            l++;r++;
        }

        return a;
    }
};