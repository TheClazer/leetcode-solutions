/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i =0,j=numbersSize-1,cur;
    *returnSize= 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    while(i<j){
        cur=numbers[i]+numbers[j];
        if(target==cur){
            ans[0]=i+1,ans[1]=j+1;
            return ans;
        }
        if(cur<target) i++;
        else j--;

    }
    return ans;
    
}