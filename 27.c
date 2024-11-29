int removeElement(int* nums, int numsSize, int val){
    int left = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[left] = nums[i];
            left++;
        }else
        {
            continue;
        }
    }
    return left;

}
