class Solution {
    string NumString(int num) {
        string x1;
        x1 = to_string(num);
        if(x1.length() == 4) return x1;
        else {
            int c = 4 - x1.length();
            for(int i=1;i <=c;i++) {
                x1 = '0' + x1;
            }
            return x1;
        }
    }
public:
    int generateKey(int num1, int num2, int num3) {
        string x = NumString(num1);
        string y = NumString(num2);
        string z = NumString(num3);

        int ans = 0;
        for(int i = 1;i <= 4;i++) {
            int x2 = x[i-1] - '0';
            int x3 = y[i-1] - '0';
            int x4 = z[i-1] - '0';
            int o = min({x2, x3, x4});
            ans += (o * pow(10,4-i));
        }


        return ans;

    }
};