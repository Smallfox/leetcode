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
    bool isBalanced(TreeNode* root) {
        return treeTraversal(root) != -1;
    }

private:
    int treeTraversal(TreeNode* node){
        if(node == NULL)
            return 0;
        int left = treeTraversal(node->left);
        int right = treeTraversal(node->right);
        if (left == -1 || right == -1 || abs(left - right) > 1) return -1;
        return (left > right ? left : right) + 1;
    }
    
    int abs(int x) {
        return x > 0 ? x : -x;
    }
};
