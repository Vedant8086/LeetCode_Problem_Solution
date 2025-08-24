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
    int getlen(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            temp = temp->next;
            len++;
        }
        
        return len;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = getlen(head);
        ListNode* temp = head;
        vector<int> v;
        while(temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int d = 0;
        int n = v.size();
        for(int i = 0;i < v.size()/ k ;i++) {
            reverse(v.begin()+d,v.begin()+d+k);
            d += k;
            n -= k;
            // if(n < k) {
            //     reverse(v.begin() + d,v.begin() + d + n);
            // }
        }
        
        ListNode* x = new ListNode(v[0]);
        ListNode* c = x;
        for(int i = 1;i < v.size();i++) {
            ListNode* new_node = new ListNode(v[i]);
            c->next = new_node;
            c = c->next;
        }
        
        return x;
    }
};