int majorityElement(int* nums, int numsSize)
{
    unsigned int res = 0;
    int bits[32] = {0};

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (nums[i] & (1u << j))
            {
                bits[j]++;
            }
        }
    }
    for (int i = 31; i >= 0; i--)
    {
        if (bits[i] > numsSize / 2)
        {
            res |= 1;
        }

	if (i != 0)
        	res <<= 1;
    }
    
    return (res);
}

