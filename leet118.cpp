class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> a;
        vector<int> temp;
        a.push_back(1);
        ans.push_back(a);
        a.clear();
        if(numRows == 1) return ans;
        a.push_back(1);
        a.push_back(1);
        ans.push_back(a);
        if(numRows == 2) return ans;
        temp = a;

        a.clear();
        for(int i = 1;i <= numRows-2;i++) {
            a.push_back(1);
            for(int j = 0;j <temp.size()-1;j++) {
                a.push_back(temp[j]+temp[j+1]);
            }
            a.push_back(1);
            ans.push_back(a);
            temp = a;
            a.clear();
        }

        return ans;
    }
};