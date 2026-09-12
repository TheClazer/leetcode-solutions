void rotate(int* nums, int numsSize, int k) {
    int temp,i;
    k %= numsSize;
    if(numsSize<2)return;
    for(i=0;i<numsSize/2;i++){
        temp = nums[numsSize-i-1];
        nums[numsSize-1-i]=nums[i];
        nums[i]=temp;
    }
    for(i =0;i<k/2;i++){
        temp = nums[k-i-1];
        nums[k-1-i]=nums[i];
        nums[i]=temp;
    }
    for(i=k;i<(numsSize+k)/2;i++){
        temp = nums[numsSize+k-i-1];
        nums[numsSize+k-1-i]=nums[i];
        nums[i]=temp;
    }
}