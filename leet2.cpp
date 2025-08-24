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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        int val = temp1->val + temp2->val;
        if(val >= 10) {
            val = val % 10;
            carry = 1;
        }
        ListNode* x = new ListNode(val);
        ListNode* temp3 = x;
        temp1 = temp1->next;
        temp2 = temp2->next;
        while(temp1 != nullptr && temp2 != nullptr) {
           int val = temp1->val + temp2->val + carry;
           carry = 0;
            if(val >= 10) {
                val = val % 10;
                carry = 1;
            } 
            ListNode* new_node = new ListNode(val);
            temp3->next = new_node;
            temp3 = temp3->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }


        while(temp1 != nullptr) {
            int val = temp1->val + carry;
            carry = 0;
            if(val >= 10) {
                val = val % 10;
                carry = 1;
            }
            ListNode* new_node = new ListNode(val);
            temp3->next =new_node;
            temp1 = temp1->next;
            temp3 = temp3->next;
        }

         while(temp2 != nullptr) {
            int val = temp2->val + carry;
            carry = 0;
            if(val >= 10) {
                val = val % 10;
                carry = 1;
            }
            ListNode* new_node = new ListNode(val);
            temp3->next =new_node;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }
        if(carry == 1) {
            ListNode* new_node = new ListNode(carry);
            temp3->next = new_node;
            temp3 = temp3->next;
        }

        return x;

    }
};