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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret;
        if(!root)
            return ret;
        getDFSPath(ret, root, to_string(root->val));
        return ret;
    }
    
private:
    void getDFSPath(vector<string> &ret, TreeNode* node, string path) {
        if(!node->left && !node->right)
            ret.push_back(path);
        if(node->left)
            getDFSPath(ret, node->left, path + "->" + to_string(node->left->val));
        if(node->right)
            getDFSPath(ret, node->right, path + "->" + to_string(node->right->val));        
    }
};
