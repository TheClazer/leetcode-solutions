int maxProduct(int* nums, int numsSize) {
    int curmax = nums[0], curmin = nums[0], max = nums[0];
    for(int i =1;i<numsSize;i++){
        if(nums[i]<0){
            int temp=curmin;
            curmin=curmax;
            curmax=temp;
        }
        if(curmax*nums[i]>nums[i])curmax*=nums[i];
        else curmax=nums[i];

        if(curmin*nums[i]<nums[i])curmin*=nums[i];
        else curmin=nums[i];

        if(max<curmax)max=curmax;

    }
    return max;
}