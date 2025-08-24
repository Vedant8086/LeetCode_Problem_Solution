class Solution {
public:
    int maxVowels(string s, int k) {
        int i =0 ;
        int j = k -1;
        int maxi = INT_MIN;
        int counts = 0;
        for(int x = i; x <= j;x++) {
            if(s[x] == 'a' || s[x] == 'e' || s[x] == 'i' || s[x] == 'o' || s[x] == 'u') {
                counts++;
            }
        }
        maxi = max(maxi,counts);
        while(j < s.length()) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                counts--;
            }
            i++;
            j++;
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
                counts++;
            }
            maxi = max(maxi,counts);
        }


        return maxi;
    }
};