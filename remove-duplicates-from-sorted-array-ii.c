int removeDuplicates(int* nums, int numsSize)
{
    int k = 0;
    for (int i = 0; i < numsSize;)
    {
        /*first version*/
        
        // if (it < 2)
        // {
        //     tmp = nums[i];
        //     nums[k++] = nums[i++];
        //     if (i < numsSize && nums[i] != nums[i - 1])
        //         it = 0;
        //     else
        //         it++;
        // }
        // else
        // {
        //     while (i < numsSize && nums[i] == tmp)
        //         i++;
        //     it = 0;
        // }
        
        nums[k++] = nums[i++];
        if (i < numsSize && nums[i] == nums[i - 1])
        {
            nums[k++] = nums[i++];
            while (i < numsSize && nums[k - 1] == nums[i])
                i++;
        }
    }

    return (k);
}
