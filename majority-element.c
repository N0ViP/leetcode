int majorityElement(int* nums, int numsSize)
{

    int res = 0, tmp = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (tmp == 0)
            res = nums[i];
        if (res == nums[i])
            tmp++;
        else
            tmp--;
    }
    
    return (res);
}
