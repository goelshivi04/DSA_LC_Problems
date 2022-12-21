/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    void preorder1(Node *root)
    {
        ans.push_back(root->val);
        for(Node *i:root->children)
        preorder1(i);
        
    }
    vector<int> preorder(Node* root) {
        if(root==NULL)
        return ans;
        preorder1(root);
        return ans;
    }
};
