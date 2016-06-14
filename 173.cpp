/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        inOrder(root, valueBST);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(valueBST.empty())
            return false;
        return true;
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* node = valueBST.front();
        valueBST.pop();
        return node->val;
    }
private:
    queue<TreeNode *> valueBST;
    void inOrder(TreeNode *node, queue<TreeNode *>& stack){
        if(node == NULL)
            return;
        inOrder(node->left, valueBST);
        valueBST.push(node);
        inOrder(node->right, valueBST);
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
