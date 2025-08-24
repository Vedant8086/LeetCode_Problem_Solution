class Solution {
public:
    int findComplement(int nums) {
        vector<int> a;
        while(nums != 0) {
            a.push_back(nums % 2);
            nums /= 2;
        }

        reverse(a.begin(),a.end());

        for(int i =0;i < a.size();i++) {
            if(a[i] == 0) a[i] = 1;
            else a[i] = 0;
        }

        long two = 1;
        for(int i = a.size() - 1;i >=0;i--) {
            nums = nums + a[i] * two;
            two *= 2;
        }


        return nums;

       
    }
};