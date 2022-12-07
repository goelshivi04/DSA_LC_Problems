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
public:
    TreeNode* ans;
    void find(TreeNode* root, int v)
    {
        if(root==NULL)
        return;
        
        if(root->val==v)
        {
            ans=root;
        }
        find(root->left,v);
        find(root->right,v);


    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        find(cloned,target->val); 
                return ans;
       
    }
};
