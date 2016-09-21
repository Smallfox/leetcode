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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0) return nullptr;
        TreeNode *node, *root;
        stack<TreeNode*> s;
        stack<int> pres, ins;
        for(int i = preorder.size()-1; i >= 0; --i){
            pres.push(preorder[i]);
            ins.push(inorder[i]);
        }
        root = new TreeNode(pres.top());
        pres.pop();
        s.push(root);
        
        while(true){
            if(ins.top() == s.top()->val){
                node = s.top();
                ins.pop();
                s.pop();
                if(!ins.size())
                    break;
                if(s.size() && ins.top() == s.top()->val)
                    continue;
                node->right = new TreeNode(pres.top());
                pres.pop();
                s.push(node->right);
            }
            else{
                node = new TreeNode(pres.top());
                pres.pop();
                s.top()->left = node;
                s.push(node);
            }
        }
        return root;
    }
};
