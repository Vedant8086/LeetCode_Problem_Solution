class Solution {
int counting(string s) {
    int count = 0;
    for(int i = 1;i < s.length();i++) {
        if(s[i] == '1') count++;
    }
    return count;
}
public:
    int maxScore(string s) {
        int maxi = 0;
        
        int left = 0;
        int right = counting(s);
        if(s[0] == '0')left++;
        for(int i = 1;i < s.length();i++) {
            maxi = max(maxi,left+right);
            if(s[i] == '0') {
                left++;
            }else {
                right--;
            }
        }
        return maxi;
    }
};