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
    int max_sum = INT_MIN; 
    int summing(TreeNode* root) {
        if(root == nullptr) return 0;
        int leftSum = max(summing(root->left),0);
        int rightSum = max(summing(root->right),0);
        int currSum = rightSum + leftSum + root->val;
        max_sum = max(currSum,max_sum);
        return max(leftSum,rightSum) + root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        summing(root);
        return max_sum; 
    }
};