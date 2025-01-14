int maximizeSum(int* nums, int numsSize, int k)
{
    int max = 0, res = 0, j = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
            j = i;
        }
    }
    for (int i = 0; i < k; i++)
    {
        res += nums[j];
        nums[j]++;
    }
    return (res);
}
