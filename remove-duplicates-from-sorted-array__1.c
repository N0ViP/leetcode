int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    for (int j = 1; j < numsSize; j++)
    {
        while (j < numsSize && nums[j] == nums[i])
            j++;
        if (j == numsSize)
            break;
        nums[++i] = nums[j];
    }

    return (i + 1);
}
