class Solution {
public:
    int cnt = 0;
    int ans = -1;

    void inorder(TreeNode* root, int k) {
        if (!root || cnt >= k) return;

        inorder(root->left, k);

        cnt++;
        if (cnt == k) {
            ans = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};
/*Leetcode problem -> Kth Smallest Element in a BST Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
Input: root = [3,1,4,null,2], k = 1*/
