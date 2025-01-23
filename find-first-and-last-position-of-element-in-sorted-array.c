/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int *res = (int *) malloc(sizeof(int) * 2);
    if (!res)
        return (NULL);
    int left = 0, right = numsSize - 1, mid;
    res[0] = -1;
    res[1] = -1;

    while (left <= right)
    {
        mid = ((right - left) / 2) + left;
        if (nums[mid] == target)
        {
            res[0] = mid;
            right = mid - 1;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    right = numsSize - 1;
    left = 0;
    
    while (left <= right)
    {
        mid = ((right - left) / 2) + left;
        if (nums[mid] == target)
        {
            res[1] = mid;
            left = mid + 1;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    *returnSize = 2;
    return (res);
}
