int removeElement(int* nums, int numsSize, int val) {
    int k = numsSize, i;
    for (i = 0; i < k; i++)
    {
        if (nums[i] == val)
        {
            while (i < k && nums[--k] == val)
                ;
            if (k != i)
                nums[i] = nums[k];
        }
    }
    return (k);
}
