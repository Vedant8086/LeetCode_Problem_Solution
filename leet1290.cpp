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
public:
    int getDecimalValue(ListNode* head) {
        int number = 0;
        int len = getlen(head);
        ListNode* temp = head;
        len--;
        while(temp != nullptr) {
            number += pow(2,len) * temp->val;
            temp = temp->next;
            len--;

        }
        return number;



        return number;
    }
};