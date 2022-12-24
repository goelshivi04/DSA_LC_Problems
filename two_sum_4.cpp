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
    set<int>s;
    void insert1(TreeNode *root)
    {
        if(root==NULL)
        return;

        if(root->left)
        s.insert(root->left->val);

        if(root->right)
        s.insert(root->right->val);

        insert1(root->left);
        insert1(root->right);

    }
    bool findTarget(TreeNode* root, int k) {
        s.insert(root->val);
        insert1(root);
        for(int n:s)
        {
            if(s.find(k-n)!=s.end() && s.find(k-n)!=s.find(n))
            return true;
        }
        return false;
    }
};
