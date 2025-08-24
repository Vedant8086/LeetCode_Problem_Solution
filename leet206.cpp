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
private : 
    void insertAtHead(ListNode*& head,int val) {
        ListNode* new_node = new ListNode(val);
        new_node->next = head;
        head = new_node;
        return;
    } 
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            ListNode* temp = nullptr;
            return temp;
        }
        ListNode* temp = head;
        ListNode* reversed = new ListNode(temp->val);
        temp = temp->next;
        while(temp != nullptr) {
            insertAtHead(reversed,temp->val);
            temp = temp->next;
        }

        return reversed;
    }
};