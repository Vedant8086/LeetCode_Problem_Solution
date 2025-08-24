class Solution {
public:
    int longestPalindrome(string s) {
        
        int count = 0;

        sort(s.begin(), s.end());

        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == s[i+1]){
                count++;
                i++;
            }
        }

        int totalDup = (count * 2);

        return totalDup == s.length() ? totalDup : totalDup + 1;
    }
};