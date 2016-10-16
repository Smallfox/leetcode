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
    int minDepth(TreeNode *root) {
   if(root == NULL) return 0;
        return getDepth(root);
    }
    int getDepth(TreeNode *r ){
        if(r == NULL) return INT_MAX;
        if(r->left == NULL && r->right == NULL)
            return 1;
        return 1+ min(getDepth(r->left), getDepth(r->right));
    }
};
