class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int min = -1;
        int l = 0,r = 0;
        while(l < nums1.size() && r < nums2.size()) {
            if(nums1[l] == nums2[r]) {
                min = nums1[l];
                break;
            }
            else if(nums1[l] > nums2[r]) {
                r++;
            }
            else {
                l++;
            }
        }

        return min;
    }
};