int removeDuplicates(int* nums, int numsSize) {
    int arr[numsSize];
    int j = 0, i = 0;
    while (i < numsSize)
    {
        arr[j] = nums[i];
        j++;
        i++;
        while (i < numsSize && nums[i] == nums[i - 1])
            i++;
    }
    i = 0;
    while (i < j)
    {
        nums[i] = arr[i];
        i++;
    }

    return (j);
}
