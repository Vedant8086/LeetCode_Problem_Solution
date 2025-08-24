class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int> m;
        for(int i = 0;i < arr.size();i++) {
            m[arr[i]] = i+1;
        }
        for(int i = 0;i < arr.size();i++) {
            if(m[arr[i] * 2] != i+1 && m[arr[i] * 2] !=0) {
                return true;
            }
        }

        return false;
    }
};