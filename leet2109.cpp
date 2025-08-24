class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int j = 0;
        string answer = "";
        for(int i = 0;i < s.length();i++) {
            if(j < spaces.size() && spaces[j] == i) {
                answer += " ";
                j++;
            }
            answer += s[i];
        }


        return answer;
    }
};