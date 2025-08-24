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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* temp = head;
        while(temp->next != nullptr) {
            int temping = temp->val;
            temp->val = temp->next->val;
            temp->next->val = temping;
            if(temp->next == nullptr || temp->next->next == nullptr) break;
            else temp = temp->next->next;
        }

        return head;
    }
};