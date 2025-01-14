int removeElement(int* nums, int numsSize, int val) {
    int swap = 0, count = 0;
    int k = numsSize - 1;

    if (numsSize == 1)
    {
        return (nums[0] != val);
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            while (nums[k] == val && k)
                k--;
            if (i == k || (i - 1) == k)
                break;
            swap = nums[i];
            nums[i] = nums[k];
            nums[k] = swap;
            k--;
        }
        count++;
    }
    return (count);
}
