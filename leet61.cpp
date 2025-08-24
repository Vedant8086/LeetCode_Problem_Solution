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
    void RoatatingList(vector<int>& arr,int d) {
        d %= arr.size();
        reverse(arr.rbegin(),arr.rbegin() + d);
        reverse(arr.rbegin() + d,arr.rend());
        reverse(arr.rbegin(),arr.rend());
        return;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return 0;
        vector<int> arr;
        ListNode* temp = head;
        while(temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        RoatatingList(arr,k);
        ListNode* x = new ListNode(arr[0]);
        ListNode* temp1 = x;
        for(int i = 1;i < arr.size();i++) {
            ListNode* new_node = new ListNode(arr[i]);
            temp1->next = new_node;
            temp1 = temp1->next;
        }

        return x;
    }
};