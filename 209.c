
int minSubArrayLen(int target, int* nums, int numsSize){

int result = INT32_MAX;
int sum = 0;    //滑动窗口数值之和
int i = 0;      //滑动窗口起始位置
int subLength = 0;  //滑动窗口的长度
for(int j = 0; j < numsSize; j++)
{
    sum += nums[j];
    //注意这里使用while，每次更新i，并不断比较子序列是否符合条件
    while(sum >= target)
    {
        subLength = (j - i + 1);    //取子序列的长度
        result = result < subLength ? result : subLength;
        sum -= nums[i++];           //变化子序列的起始位置
    }
}

//如果result没有被赋值，就返回0,说明没有符合条件的子序列
return result == INT32_MAX ? 0 : result;

}
