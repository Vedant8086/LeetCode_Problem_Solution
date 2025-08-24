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
        int count  = 0;
        ListNode* temp = head;
        while(temp!=nullptr) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = getCount(head);
        int mid;
        if(count == 1) {
            ListNode* temp = NULL;
            return temp;
        }
        if(count % 2 != 0) {
            mid = count + 1;
            mid = mid / 2;
        }
        else {
            mid = count / 2;
            mid = mid + 1;
        }
        int i = 1;
        while(i < mid - 1) {
            i++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp = head;
        return head;
    }
};