/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        preOrder(root, result);
        return result;
    }
    
    void preOrder(TreeNode *node, vector<int> &res){
        if(!node) return;
        res.push_back(node->val);
        preOrder(node->left, res);
        preOrder(node->right, res);
    }
};
