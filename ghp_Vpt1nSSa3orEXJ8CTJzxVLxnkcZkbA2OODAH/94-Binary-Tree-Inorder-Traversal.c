/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int count=0;
 int* inorder;
 int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inordersort(struct TreeNode *root){
    if(root!=NULL){
    inordersort(root->left);
    inorder[count++]=root->val;
    inordersort(root->right);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    count = 0;
*returnSize = countNodes(root);
inorder = malloc(*returnSize*sizeof(int));
inordersort(root);
return inorder;
}