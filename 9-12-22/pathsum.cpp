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
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
        return false;
        if(sum==root->val && root->left==NULL && root->right==NULL)
        return true;
        sum-=root->val;
        if(true==hasPathSum(root->left,sum))
        return true;
        else
        if(true==hasPathSum(root->right,sum))
        return true;
        return false;
    }
};
