class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int i = 0;
        int j = 0;
        int count = 0;
        while(i< word.length()) {
            if(word[i] == word[j]) {
                count++;
            } else {
                if(count > 9) {
                    while(count>= 9) {
                        ans+=to_string(9);
                        ans+=word[i];
                        count-=9;
                    }
                    if(count>=1) {
                        ans+=to_string(count);
                        ans+=word[i];
                    }
                } else {
                    ans += to_string(count);
                    ans+= word[i];
                }
                count = 0;
                i = j;
                j--;
            }
            j++;
        }
        return ans;
    }
};