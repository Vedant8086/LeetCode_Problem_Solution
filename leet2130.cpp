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
    int GetLen(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp != nullptr) {
            len++;
            temp = temp->next;
        }

        return len;
    }
    // ListNode* insertingAtHead(ListNode*& first,int value) {
    //     ListNode* temp = new ListNode(value);
    //     temp->next = first;
    //     first = temp;
    //     return first;
    // }
    // ListNode* reversingList(ListNode* first) {
    //     ListNode* temp = first;
    //     ListNode* reversed = new ListNode(temp->val);
    //     temp = temp->next;
    //     while(temp != NULL) {
    //         reversed = insertingAtHead(reversed,temp->val);
    //         temp = temp->next;
    //     }
    //     return reversed;
    // }
public:
    int pairSum(ListNode* head) {
        
        int len = GetLen(head);
        int maxiSum = 0;
        vector<int> a(len,0);
        ListNode* x = head;
        for(int i = 0;i < len;i++) {
            a[i] = x->val;
            x = x->next;
        }
        reverse(a.begin(),a.end());
        ListNode* temp = head;
        for(int i = 0;i <=len / 2 - 1;i++) {
            int count = temp->val + a[i];
            maxiSum = max(count,maxiSum);
            temp = temp->next;
        }
        return maxiSum;   
    }
};