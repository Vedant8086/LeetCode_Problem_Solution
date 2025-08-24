class Solution {
public:
    string reformatDate(string date) {
        map<string,string> m;
        m["Jan"] = "01";
        m["Feb"] = "02";
        m["Mar"] = "03";
        m["Apr"] = "04";
        m["May"] = "05";
        m["Jun"] = "06";
        m["Jul"] = "07";
        m["Aug"] = "08";
        m["Sep"] = "09";
        m["Oct"] = "10";
        m["Nov"] = "11";
        m["Dec"] = "12";
        vector<string> ans;
        string x = "";
        for(auto i : date) {
            if(i == ' ') {
                ans.push_back(x);
                x = "";
            } else {
                x += i;
            }
        }
        ans.push_back(x);
        string anss = "";
        anss += ans[2];
        anss += '-';
        anss += m[ans[1]];
        anss += '-';
        if(ans[0].length() == 3) {
            anss += '0';
            anss += ans[0].substr(0,ans[0].length()-2);
        } else anss += ans[0].substr(0,ans[0].length()-2);
        return anss;
    }
};