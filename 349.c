int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
int map1[10000] = {0};
int lessSize = nums1Size < nums2Size ? nums1Size : nums2Size;
int* ans = malloc(sizeof(int) * lessSize);
int resultIndex = 0;
int* tempNums;

for(int i = 0; i < nums1Size; i++)
{
    map1[nums1[i]]++;
}

for(int j = 0; j < nums2Size; j++)
{
    if(map1[nums2[j]] > 0){
        ans[resultIndex] = nums2[j];
        resultIndex++;
        map1[nums2[j]] = 0;
    }
}

*returnSize = resultIndex;

return ans;
}
