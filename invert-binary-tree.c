/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    

    if (!root)
        return (NULL);
    struct TreeNode* swp = root->left;
    root->left = root->right;
    root->right = swp;

    invertTree(root->left);
    invertTree(root->right);

    return (root);
}
