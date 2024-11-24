// dp thought

int compare(int a, int b) { return a > b ? a : b; }
int maxSubArray(int* nums, int numsSize) {
    int cur = 0;
    int max = nums[0];
    for (int i = 0; i < numsSize; i++){
        cur = compare(cur + nums[i], nums[i]);
        max = compare(max, cur);
    }
    return max;
    
}