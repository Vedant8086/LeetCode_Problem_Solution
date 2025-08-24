class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        map<string,int> m1;
        ans.push_back("IM king");
        int f = 1;
        for(auto i : list2) {
            m1[i] = f;
            f++;
        }
        f = 0;
        int min_sum = INT_MAX;
        for(int i = 0;i < list1.size();i++) {
            int sum;
            if(m1[list1[i]] > 0) {
                sum = i + (m1[list1[i]]-1);
                if(sum < min_sum) {
                    ans.pop_back();
                    ans.push_back(list1[i]);
                    min_sum = sum;
                } else if(sum == min_sum) {
                    ans.push_back(list1[i]);
                }
            }
        }


        return ans;



    }
};