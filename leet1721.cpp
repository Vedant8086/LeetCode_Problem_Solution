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
    int getLen(ListNode* head) {
        int len = 0;
        while(head != nullptr) {
            len+=1;
            head = head->next;
        }

        return len;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int len = getLen(head);
        int l = k,r = len - k + 1;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        for(int i = 1;i < k;i++) {
            temp1= temp1->next;
        } 
        for(int i = 1;i < r;i++) {
            temp2 = temp2->next;
        }
        int temp = temp1->val;
        temp1->val = temp2->val;
        temp2->val = temp;


        return head;
    }
};