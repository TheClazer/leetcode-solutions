/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] != 9) {
            *returnSize = digitsSize;
            int *ans = (int*)malloc(digitsSize * sizeof(int));
            for (int j = 0; j < i; j++)  ans[j] = digits[j]; 
            ans[i] = digits[i] + 1;                           
            for (int j = i + 1; j < digitsSize; j++) ans[j] = 0; 
            return ans;
        }
    }
    
    *returnSize = digitsSize + 1;
    int *ans = (int*)calloc(digitsSize + 1, sizeof(int));
    ans[0] = 1;
    return ans;
}