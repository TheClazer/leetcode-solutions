void sortColors(int* nums, int numsSize) {
    int zero=0,one=0,two=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)zero++;
        if(nums[i]==1)one++;
        if(nums[i]==2)two++;
    }
    int i =0;
    while(i<zero)nums[i++]=0;
    while(i<one+zero)nums[i++]=1;
    while(i<two+one+zero)nums[i++]=2;
}