double findMaxAverage(int* nums, int numsSize, int k) {
    int i=0,j=i+k;
    double max=0;
    for(int i =0;i<k;i++) max+=nums[i];
    int cursum=max;
    for(j=k,i=1;j<numsSize;j++,i++){
        cursum=cursum-nums[i-1]+nums[j];
        if(cursum>max)max=cursum;
    }
    double ans=max/k;
    return ans;
    
}