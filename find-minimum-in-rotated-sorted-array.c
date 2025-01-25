int findMin(int* nums, int numsSize) {
    int left = 0, right = numsSize -1, mid;

    while (left < right)
    {
        mid = left + ((right - left) / 2);

        if (nums[right] < nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return (nums[right]);
}
