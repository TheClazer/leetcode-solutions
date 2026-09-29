/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max=candies[0],i;
    *returnSize=candiesSize;
    for( i = 0;i<candiesSize;i++){
        if (candies[i]>max){
            max=candies[i];
            
        }
    }
    bool * ans=malloc(sizeof(bool)*candiesSize);
    for(i=0;i<candiesSize;i++){
        if(candies[i]+ extraCandies >= max){
            ans[i]=true;
        }
        else ans[i]= false;
    }
    return ans;
    }