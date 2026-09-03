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
int countnode(struct TreeNode* root){
    if(root==NULL)return 0;
    return 1 + countnode(root->left)+ countnode(root->right);
}
void addarray(int*index, int*ans,struct TreeNode* root){
    if (root == NULL) return;
    ans[(*index)++] = root->val;
    addarray(index, ans, root->left);
    addarray(index, ans,root->right);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int index=0;
    *returnSize = countnode(root);
    int *ans = (int*)malloc(*returnSize*sizeof(int));
    addarray(&index,ans,root);  
    return ans;
}