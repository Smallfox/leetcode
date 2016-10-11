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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        ret.clear();
        if(root == NULL)
            return ret;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        vector<int> tmp;
        while(!q.empty()){
            TreeNode *n = q.front();
            q.pop();
            if(n != NULL){
                tmp.push_back(n->val);
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            else
            {
                if(!tmp.empty()){
                    q.push(NULL);
                    ret.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
