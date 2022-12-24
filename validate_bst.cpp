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

    bool bst(TreeNode *root, long l, long r)
    {
       if(root==NULL)
       return true;

       if(!(root->val > l && root->val < r))
       return false;

       return (bst(root->left,l,root->val) && bst(root->right,root->val,r)); 
       
    }
    bool isValidBST(TreeNode* root) {
        
        if(root==NULL)
        return true;

        return bst(root,LONG_MIN,LONG_MAX);
    }
};
