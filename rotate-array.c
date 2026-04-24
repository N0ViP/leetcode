void rotate(int* nums, int numsSize, int k) {

    k %= numsSize;
    if (k <= 0)
        return;

    for (int j = 0, ctr = 0; ctr < numsSize; j++)
    {
        for (int i = k + j, z = -1, var = nums[j], tmp; ctr < numsSize && z != j; ctr++)
        {
            tmp = nums[i];
            nums[i] = var;
            var = tmp;
            z = i;
            i = (i + k) % numsSize;
        }
    }
}


