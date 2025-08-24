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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> a;
        ListNode* temp = head;
        while(temp != nullptr) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        left--;
        reverse(a.begin()+left,a.begin()+right);
        ListNode* x = new ListNode(a[0]);
        ListNode* temp1 = x;
        for(int i = 1;i < a.size();i++) {
            ListNode* new_node = new ListNode(a[i]);
            temp1->next = new_node;
            temp1 = temp1->next;
        }


        return x;
    }
};