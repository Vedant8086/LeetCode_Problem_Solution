class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> v(arr[n - 1] + 1,0);
        for(int i = 1;i <= n;i++) {
            v[arr[i - 1]] = 1;
        }
        for(int i = 1;i < v.size();i++) {
            if(v[i] == 0) {
                k--;
            }

            if(k == 0) return i;
        }
        int nm = 0;
        if(k != 0) {
            nm = arr[n - 1] + k;
        }

        return nm;
    }
};