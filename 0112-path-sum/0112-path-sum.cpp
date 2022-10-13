/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        stack<TreeNode *> s;
        TreeNode *pre = NULL, *cur = root;
        int SUM = 0;
        while (cur || !s.empty()) {
            while (cur) {
                s.push(cur);
                SUM += cur->val;
                cur = cur->left;
            }
            cur = s.top();
            if (cur->left == NULL && cur->right == NULL && SUM == sum) {
                return true;
            }
            if (cur->right && pre != cur->right) {
                cur = cur->right;
            } else {
                pre = cur;
                s.pop();
                SUM -= cur->val;
                cur = NULL;
            }
        }
        return false;
    }
};