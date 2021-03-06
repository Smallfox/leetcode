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
    bool isSymmetric(TreeNode *root) {
        if(!root) return true;
        return isSym(root->left, root->right);
    }
    
    bool isSym(TreeNode *left, TreeNode *right){
        if(!left) 
            return (right==NULL);
        if(!right) 
            return (left==NULL);
        if(left->val != right->val) 
            return false;
        if(!isSym(left->left, right->right))
            return false;
        if(!isSym(left->right, right->left))
            return false;
        return true;
    }
};
