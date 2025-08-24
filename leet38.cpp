class Solution {
private : 
    string can_u_do(string a) {
        int count = 0;
        string ax = "";
        char x = a[0];
        count++;
        for(int i = 1;i < a.size();i++) {
            if(a[i] == x) {
                count++;
            } else {
                ax += to_string(count);
                ax += x;
                count = 1;
                x = a[i];
            }
        }
        ax += to_string(count);
        ax += x;
        return ax;
    }
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string ans = "1";
        for(int i = 1;i < n;i++) {
            ans = can_u_do(ans);
        }
        return ans;
    }
};