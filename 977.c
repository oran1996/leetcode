
int compar(const void *a, const void*b) {
        return *(int*)a - *(int*)b;
    }

int* sortedSquares(int* nums, int numsSize, int* returnSize){
    (*returnSize) = numsSize;
    int* ans = malloc(sizeof(int) * numsSize);
    
    for(int i =0; i < numsSize; i++)
    {
        ans[i] = nums[i] * nums[i];
    }

    qsort(ans, numsSize, sizeof(int), compar);

    return ans;
}
