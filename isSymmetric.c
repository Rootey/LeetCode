/**
 *Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL)
        return true;
    
    return isChildTreeSymmetric(root->left, root->right);
}

bool isChildTreeSymmetric(struct TreeNode* left, struct TreeNode* right) {
    if(!left && !right)
        return true;
    if(!right&&left || !left&&right || left->val!=right->val)
        return false;
    
    return isChildTreeSymmetric(left->left, right->right) && isChildTreeSymmetric(left->right, right->left);
}
