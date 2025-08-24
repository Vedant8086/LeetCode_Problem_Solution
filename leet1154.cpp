class Solution {
public:
    int dayOfYear(string date) {
        int arr[] = {0,31,59,90,120,151,181,212,243,273,304,334};
        int final_answer = 0;
        int year = stoi(date.substr(0,4));
        if(stoi(date.substr(5,7)) > 2) {
            if(year % 4 == 0) {
                if(year % 100 == 0) {
                    if(year % 400 == 0) {
                        final_answer++;
                    }
                } else {
                    final_answer++;
                }
            }
        }
        final_answer += arr[stoi(date.substr(5,7))-1];
        final_answer += stoi(date.substr(8,10));


        return final_answer;
    }
};