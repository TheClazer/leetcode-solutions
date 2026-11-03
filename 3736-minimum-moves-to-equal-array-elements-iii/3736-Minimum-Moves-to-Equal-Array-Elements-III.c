int minMoves(int* nums, int numsSize) {
    int max=nums[0],count=0;
    for(int i = 0; i<numsSize;i++){
        if (nums[i]>max) max = nums[i];
    }
    for(int i = 0;i<numsSize;i++){
        count = count + max-nums[i];
    }
    return count;
}