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
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr || head->next == nullptr) return  head;
        ListNode* DummyNode1 = new ListNode(-1);
        ListNode* DummyNode2 = new ListNode(-1);
        ListNode* temp = head;
        ListNode* x1 = DummyNode1;
        ListNode* x2 = DummyNode2;
        while(temp != nullptr) {
            if(temp->val < x) {
                ListNode* new_node = new ListNode(temp->val);
                x1->next = new_node;
                x1 = x1->next;
            } else {
                ListNode* new_node = new ListNode(temp->val);
                x2->next = new_node;
                x2 = x2->next;
            }
            temp = temp->next;
        }
        x1->next = DummyNode2->next;

        return DummyNode1->next;
    }
};