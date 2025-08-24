class Solution {
private : 
    vector<int> vowelvec(vector<string> x) {
        vector<int> num;
        int count_sum = 0;
        for(int i = 0;i < x.size();i++) {
            string x1 = x[i];
            int io = x1.length()-1;
            if(x1[0] == 'a' || x1[0]== 'e' || x1[0] == 'i' || x1[0] == 'o' || x1[0] == 'u') {
                if(x1[io] == 'a' || x1[io]== 'e' || x1[io] == 'i' || x1[io] == 'o' || x1[io] == 'u') {
                    count_sum++;
                }
            }
            num.push_back(count_sum);
        }

        return num;
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> x = vowelvec(words);
        vector<int> ans;
        for(int i = 0;i < n;i++) {
            int x1 = queries[i][0];
            int x2 = queries[i][1];
            if(x1 == 0) {
                ans.push_back(x[x2]);
            } else if(x1 > 0) {
                ans.push_back((x[x2]-x[x1-1]));
            }
        }

        return ans;
    }
};