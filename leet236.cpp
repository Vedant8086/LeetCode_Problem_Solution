/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private : 
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr || root == p || root == q) {
            return root ;
        }
        TreeNode* lans = lowestCommonAncestor(root->left,p,q);    
        TreeNode* rans = lowestCommonAncestor(root->right,p,q);

        if(lans != nullptr && rans != nullptr) return root;
        else if(lans != nullptr) return lans;
        else return rans;    
    }
};