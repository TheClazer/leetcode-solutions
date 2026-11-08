/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int*ans=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int left=1,right=1;
    for(int i=0;i<numsSize;i++){
        ans[i]=left;
        left*=nums[i];
        
    }
    for(int i=numsSize-1;i>=0;i--){
        ans[i]*=right;
        right*=nums[i];
        
    }
    return ans;

}