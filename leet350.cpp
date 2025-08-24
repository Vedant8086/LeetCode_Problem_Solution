class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
       map<int,int> m;
       vector<int> n1,n2;
       if(num1.size() >= num2.size()) {
            n1 = num1;
            n2 = num2;
       } else {
            n1 = num2;
            n2 = num1;
       }

       for(auto i : n1) {
            m[i]++;
       }
        vector<int> ans;
       for(auto i : n2) {
            if(m[i] != 0){
                ans.push_back(i);
                int x = m[i];
                x--;
                m[i] = x;
            }
       }
       return ans;
    }
};