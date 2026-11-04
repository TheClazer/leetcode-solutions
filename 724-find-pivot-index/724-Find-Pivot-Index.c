int pivotIndex(int* nums, int numsSize) {
    int totalsum=0,cursum=0;
    for(int i = 0;i<numsSize;i++){totalsum+=nums[i];}
    for(int i=0;i<numsSize;i++){
        
        if(totalsum-cursum-nums[i]==cursum) return i;
        cursum+=nums[i];
        
    }
    return -1;
}