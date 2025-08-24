class Solution {
public:
    vector<int> getRow(int numRows) {
        vector<vector<int>> ans;
        vector<int> a;
        vector<int> temp;
        a.push_back(1);
        ans.push_back(a);
        a.clear();
        a.push_back(1);
        a.push_back(1);
        ans.push_back(a);
        temp = a;

        a.clear();
        for(int i = 1;i <= numRows+1-2;i++) {
            a.push_back(1);
            for(int j = 0;j <temp.size()-1;j++) {
                a.push_back(temp[j]+temp[j+1]);
            }
            a.push_back(1);
            ans.push_back(a);
            temp = a;
            a.clear();
        }

        for(int i = 0;i < ans.size();i++) {
            if(numRows == i) {
                return ans[i];
            }
        }
        return {-1};
    }
};