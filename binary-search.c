int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, mid;

    while (left <= right)
    {
        mid = ((right - left) / 2) + left;

        if (nums[mid] == target)
            return (mid);
        else if (target > nums[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
