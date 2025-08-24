class Solution {
private : 
    int elementJustLess(vector<int> x,int val) {
        int low = 0;
        int high = x.size()-1;
        int mid = low+high / 2;
        while(low<=high) {
            if(x[mid] <= val) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
            if(low > x.size() || high > x.size()) return 0;
            mid = (low + high)/2;
        }

        return x[high];
    }
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        map<int,int> m;
        int maxNum = 0;
        for(int i = 0;i < items.size();i++) {
            maxNum = max(items[i][1],maxNum);
            if(m[items[i][0]] != 0) {
                m[items[i][0]] = max(m[items[i][0]],items[i][1]);
            } else {
                m[items[i][0]] = maxNum;
            }
        }
        vector<int> ans;
        vector<int> x;
        for(auto i : m) {
            x.push_back(i.first);
        }
        sort(x.begin(),x.end());
        for(int i = 0;i < queries.size();i++) {
            if(m[queries[i]] != 0) {
                ans.push_back(m[queries[i]]);
            } else {
                ans.push_back(m[elementJustLess(x,queries[i])]);
            }
        }
        if(ans.size() == 0) ans.push_back(0);
        return ans;
     }
};