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
    int getCount(ListNode* head) {
        int count = 0;
        while(head!= nullptr) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = getCount(head);
        ListNode* temp = head;
        if(count == 1) {
            head = nullptr;
            return head;
        }
        int node = count - n + 1;
        if(node == 1) {
            ListNode* temps = head;
            head = head->next;
            delete temps;
            return head;
        }
        int i = 1;
        while(i < node - 1){
            i++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};