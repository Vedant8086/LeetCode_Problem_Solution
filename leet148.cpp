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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        vector<int> v;
        ListNode* x = head;
        while(x != nullptr) {
            v.push_back(x->val);
            x = x->next;
        }
        sort(v.begin(),v.end());
        ListNode* sorted = new ListNode(v[0]);
        ListNode* tempx = sorted;
        for(int i = 1;i < v.size();i++) {
            ListNode* new_node = new ListNode(v[i]);
            tempx->next = new_node;
            tempx = tempx->next;
        }

        return sorted;
    }
};