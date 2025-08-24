class Solution {
public:
    string removeStars(string s) {
        stack<char> s1;
        for(auto x : s){
            if(x == '*') {
                s1.pop();
            }
            else {
                s1.push(x);
            }
        }
        string ans = "";
        while(!(s1.empty())) {
            ans += s1.top();
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};