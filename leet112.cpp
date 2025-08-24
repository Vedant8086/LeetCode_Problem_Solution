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
    bool isSum = false;
    int summing(TreeNode* root,int& sum,int target) {
        if(root == nullptr) return 0;
        sum += root->val;
        if(sum == target && root->left == nullptr && root->right == nullptr) isSum = true;
        summing(root->left,sum,target);
        // sum -= root->val;
        summing(root->right,sum,target);
        sum -= root->val;

        return sum;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0; 
        summing(root,sum,targetSum);
        return (this->isSum);      
    }
};