/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private :   
    bool trees(TreeNode* p,TreeNode* q) {
        if(!p && !q) {
            return true;
        }
        
        if(p && q && p->val == q->val) {
            return (trees(p->left,q->left) && trees(p->right,q->right));
        }

        return false;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return trees(p,q);
    }
};