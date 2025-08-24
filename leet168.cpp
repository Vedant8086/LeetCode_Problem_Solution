class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer = "";
        while(columnNumber > 0) {
            columnNumber--;
            answer = char(65 + (columnNumber % 26)) +answer;
            columnNumber /= 26;

        }

        return answer;
    }
};