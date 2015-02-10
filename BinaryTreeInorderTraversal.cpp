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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        inOrder(root, result);
        return result;
    }
    
    void inOrder(TreeNode *node, vector<int> &res){
        if(node == NULL) return;
        inOrder(node->left, res);
        res.push_back(node->val);
        inOrder(node->right, res);
    }
};
