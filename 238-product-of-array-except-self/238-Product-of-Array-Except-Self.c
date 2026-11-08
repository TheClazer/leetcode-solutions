/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int totsum=1,zero=0;
    for(int i = 0;i<numsSize;i++){
        if(nums[i]==0 ){
            zero++;
            continue;
        }
        totsum=totsum*nums[i];
    }
    int *ans=(int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    if(zero>1){
    for(int i=0;i<numsSize;i++){
        ans[i]=0;
    }}
    else{
        for(int i=0;i<numsSize;i++){
            if(nums[i]==0) ans[i]=totsum;
            else {
        if (zero == 1)
            ans[i] = 0;
        else
            ans[i] = totsum / nums[i];
    }
        }
    }
    return ans;

}