int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = malloc(sizeof(int) * 2);
    int i = 0;
    int j;
    while (i < numsSize)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if ((nums[i] + nums[j]) == target)
            {
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return (res);
            }
            j++;
        }
        i++;
    }
    *returnSize = 0;
    return (res);
}
