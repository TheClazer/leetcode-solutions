int majorityElement(int* nums, int numsSize) {
    int el=nums[0],count=1;
    for(int i = 0;i<numsSize;i++){
        if(nums[i]==el) count++;
        else count--;
        if(!count){
            el=nums[i];
            count=1;
        }
    }
    return el;
}