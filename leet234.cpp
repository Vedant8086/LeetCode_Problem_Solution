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
        ListNode* temp = new ListNode(val);

        temp->next = head;
        head = temp;
        return;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode* new_node = new ListNode(head->val);
        ListNode* temp = head->next;

        while(temp != nullptr) {
            insertAtHead(new_node,temp->val);

            temp = temp->next;
        }

        while(head != nullptr) {
            if(head->val != new_node->val) {
                return false;
            }
            head = head->next;
            new_node = new_node->next;
        }

        return true;

    }
};