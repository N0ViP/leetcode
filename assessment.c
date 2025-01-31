int pivotIndex(int* nums, int numsSize) {
    int sum = 0, tmp = 0;
    for (int i = 0; i < numsSize; i++)
        sum += nums[i];

    for (int i = 0; i < numsSize; i++)
    {
        if (tmp == sum - nums[i] - tmp)
            return (i);
        tmp += nums[i];
    }
    
    return (-1);
}
