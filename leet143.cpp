/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode*& head) {
        ListNode* temp = head;
        vector<int> a;
        while(temp != nullptr) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> x  = a;
        reverse(x.begin(),x.end());
        vector<int> rev;
        for(int i =0 ;i <=a.size() / 2;i++) {
            rev.push_back(a[i]);
            rev.push_back(x[i]);
        } 
        for(int i = 0;i < rev.size();i++) {
            if(head != nullptr) {
                head->val = rev[i];
                head = head->next;
            }
        }

        return;
        

    }
};