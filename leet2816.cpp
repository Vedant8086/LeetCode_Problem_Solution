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
    int getlen(ListNode* head) {
        int len = 0;
        while(head != nullptr) {
            len++;
            head = head->next;
        }

        return len;
    }
    ListNode* reverseList(ListNode*& head) {
        ListNode* temp = new ListNode(head->val);
        head = head->next;
        while(head != nullptr) {
            ListNode* x = new ListNode(head->val);
            x->next = temp;
            temp = x;
            head = head->next;
        }

        return temp;
    } 
public:
    ListNode* doubleIt(ListNode* head) {
        int len = getlen(head);
        int carry = 0;
        ListNode* temp = reverseList(head);
        int num = temp->val * 2;
        if(num >= 10) carry = 1;
        ListNode* x = new ListNode(num % 10);
        temp = temp->next;
        ListNode* b = x;
        while(temp != nullptr) {
            int temp12 = (temp->val * 2) + carry;
            carry = 0;
            if(temp12 >= 10) carry = 1; 
            ListNode* new_node = new ListNode(temp12 % 10);
            new_node->next = x;
            x = new_node;
            temp = temp->next;
        }
        if(carry == 1) {
            ListNode* cv = new ListNode(carry);
            cv->next =x;
            x = cv;
        }


        return x;
    }
};