class Solution {
public:
    bool helper(TreeNode* root, long long minVal, long long maxVal) {
        if (root == nullptr)
            return true;

        if (root->val <= minVal || root->val >= maxVal)
            return false;

        return helper(root->left, minVal, root->val) &&
               helper(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};
/*Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys strictly less than the node's key.
The right subtree of a node contains only nodes with keys strictly greater than the node's key.
Both the left and right subtrees must also be binary search trees.*/