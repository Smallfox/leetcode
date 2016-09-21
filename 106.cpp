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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0) return nullptr;
        TreeNode *node, *root;
        stack<TreeNode*> s;
        root = new TreeNode(postorder.back());
        s.push(root);
        postorder.pop_back();
        while(true){
            if(inorder.back() == s.top()->val){
                node = s.top();
                inorder.pop_back();
                s.pop();
                if(!inorder.size()) 
                    break;
                if(s.size() && inorder.back() == s.top()->val)
                    continue;
                node->left = new TreeNode(postorder.back());
                postorder.pop_back();
                s.push(node->left);
            }
            else{
                node = new TreeNode(postorder.back());
                postorder.pop_back();
                s.top()->right = node;
                s.push(node);
            }
        }
        return root;
    }
};
