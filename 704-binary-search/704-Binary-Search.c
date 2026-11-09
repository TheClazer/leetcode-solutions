int search(int* nums, int numsSize, int target) {
    int left=0,right=numsSize-1;
    int mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(target<nums[mid]) right=mid-1;
        if(target>nums[mid])left=mid+1;
        if(target==nums[mid])return mid;
    }

    return -1;
}